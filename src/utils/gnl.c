#include "twenty_squares.h"

#ifndef GNL_BUFFER_SIZE
# define GNL_BUFFER_SIZE 42
#endif

static int	search_newline(char *buffer, int fd, char **line, char **newline);
static char	*add_to_line(char *line, char *added, int free_added);
static char	*get_line(char *src, char *newline_in_src);
static void	shift_buffer(char *buffer, char *newline);

/* Get Next Line */
char	*gnl(int fd)
{
	static char	buffer[GNL_BUFFER_SIZE + 1];
	static int	previous_fd;
	char		*line;
	char		*newline_in_buffer;

	if (GNL_BUFFER_SIZE < 1)
		return (0);
	if (fd != previous_fd)
	{
		buffer[0] = 0;
		if (fd < 0)
			return (0);
		previous_fd = fd;
	}
	if (!search_newline(buffer, fd, &line, &newline_in_buffer))
	{
		free(line);
		return (0);
	}
	if (newline_in_buffer)
		line = add_to_line(line, get_line(buffer, newline_in_buffer), 1);
	shift_buffer(buffer, newline_in_buffer);
	return (line);
}

static int	search_newline(char *buffer, int fd, char **line, char **newline)
{
	ssize_t	read_amount;

	*line = 0;
	*newline = strchr(buffer, '\n');
	while (!*newline)
	{
		*line = add_to_line(*line, buffer, 0);
		read_amount = read(fd, buffer, GNL_BUFFER_SIZE);
		if (read_amount >= 0)
			buffer[read_amount] = 0;
		if (read_amount < 0)
			return (0);
		else if (!read_amount)
		{
			if (!*line[0])
				return (0);
			break ;
		}
		else
			*newline = strchr(buffer, '\n');
	}
	return (1);
}

static char	*add_to_line(char *line, char *added, int free_added)
{
	size_t	len;
	char	*joined;

	if (!line)
		line = calloc(1, sizeof(char));
	if (line)
	{
		len = strlen(line);
		if (added)
			len += strlen(added);
		joined = malloc((len + 1) * sizeof(char));
		if (joined)
		{
			joined[0] = 0;
			strncat(joined, line, len);
			strncat(joined, added, len);
			free(line);
			line = joined;
		}
	}
	if (free_added)
		free(added);
	return (line);
}

static char	*get_line(char *src, char *newline_in_src)
{
	char	*dup;
	size_t	len;

	len = newline_in_src - src + 1;
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	dup[0] = 0;
	strncat(dup, src, len);
	return (dup);
}

static void	shift_buffer(char *buffer, char *newline)
{
	size_t	i;

	i = 0;
	if (newline)
	{
		while (newline[i + 1])
		{
			buffer[i] = newline[i + 1];
			++i;
		}
	}
	buffer[i] = 0;
	return ;
}
