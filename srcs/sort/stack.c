#include "libft.h"

void		mid(t_stack *a)
{
	int		i;
	int		dif;
	int		sum;

	i = -1;
	sum = 0;
	dif = MAX_INT;
	while (++i < a->lenght)
		sum += a->stack[i];
	sum /= a->lenght;
	i = -1;
	while(++i < a->lenght)
		dif = ft_min_abs(a->stack[i] - sum, dif);
	a->mid = sum + dif;
}

void		is_sort(t_stack *a)
{
	int		i;

	i = 0;
	while (++i < a->lenght)
		if (a->stack[i - 1] > a->stack[i])
			print_error(ERR_CHECKER);
	print_error(CHECKER_OK);
}