#include "../../includes/libft.h"

void		print_error(char *massage)
{
	if (errno == 0)
		ft_putendl_fd(massage, 2);
	else
		perror(massage);
	exit(1);
}