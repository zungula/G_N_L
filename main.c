#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int fd;
	char *line;
	int i = 1;

	if (argc < 2)
	{
		puts("Expected two arguments for main");
		return (0);
	}
	int ret;
	fd = open(argv[1], O_RDONLY);
	while((ret = get_next_line(fd, &line)))
		printf("%d-%s\n",i++, line);
	printf("final ret = %d\n", ret);
}
