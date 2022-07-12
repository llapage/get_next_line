#include "get_next_line.h"

static int			read_line(int fd, char	**out)
{
	int		ret;
	char	*temp;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!out[fd])
			if(!(out[fd] = ft_strnew(0)))
				return (-1);
		temp = ft_strjoin(out[fd], buf);
		free(out[fd]);
		if (temp == NULL)
			return (-1);
		out[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	return (0);
}

static int			put_in_line(int fd, char **out, char **line)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!out[fd] || out[fd][i] == '\0')
		return (0);
	while (out[fd][i] != '\n' && out[fd][i])
		i++;
	if(!((*line) = ft_strsub(out[fd], 0, i)))
		return (-1);
	if (out[fd][i] == '\n')
		i++;
	tmp = ft_strdup(out[fd] + i);
	free(out[fd]);
	if (tmp == NULL)
		return (-1);
	out[fd] = tmp;
	if (ft_strlen(out[fd]) == 0)
		ft_strdel(&(out[fd]));
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char *out[OPEN_MAX];

	if (fd < 0 || !line || fd >= OPEN_MAX)
		return (-1);
	if (out[fd] && ft_strchr(out[fd], '\n'))
		return (put_in_line(fd, out, line));
	if ((read_line(fd, out)) != 0)
		return (-1);
	return (put_in_line(fd, out, line));
}
