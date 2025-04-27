#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    char *dup;
    int len = 0;
    int i = 0;

    len = ft_strlen(src) + 1;
    dup = (char *)malloc(len * sizeof(char));
    if (!dup)
        return (NULL);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static int pos;
    static int size_read;
    char line[70000];
    int i = 0;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    while (1)
    {
        if (pos >= size_read)
        {
            size_read = read(fd, buffer, BUFFER_SIZE);
            pos = 0;
            if (size_read == 0)
                break ;
        }
        line[i++] = buffer[pos++];
        if (buffer[pos] == '\n')
            break ;
    }
    line[i] = '\0';
    if (i == 0)
        return (0);
    return (ft_strdup(line));
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
