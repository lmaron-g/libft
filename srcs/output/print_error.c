#include "../../includes/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

void		print_error(char *massage)
{
	if (errno == 0)
		ft_putendl_fd(massage, 2);
	else
		perror(massage);
	exit(1);
}

void		termination(char *massage, int fd)
{
	ft_putendl_fd(massage, fd);
	exit(0);
}