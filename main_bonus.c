#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int main(void)
{
	int fd[4]; 
	fd[0]= 0;
	fd[1]= open("files/one_line", O_RDONLY);
	fd[2]= open("files/myfile", O_RDONLY);
	fd[3]= open("files/phrase", O_RDONLY);
	char *line = "";

	while (line != NULL)
	{
		line = get_next_line(fd[0]);
		printf("%s\n", line);
		free(line);

		line = get_next_line(fd[1]);
		printf("%s\n", line);
		free(line);

		line = get_next_line(fd[2]);
		printf("%s\n", line);
		free(line);

		line = get_next_line(fd[3]);
		printf("%s\n", line);
		free(line);
	}
	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	close(fd[3]);
	return (0);
}