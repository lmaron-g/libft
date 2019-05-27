#include "libft.h"

void	insert_sort(t_stack *a)
{
	int	i;
	int	j;
	int	item_to_insert;

	i = 1;
	while (i < a->lenght)
	{
		item_to_insert = a->stack[i];
		j = i - 1;
		while (j >= 0 && a->stack[j] > item_to_insert)
		{
			a->stack[j + 1] = a->stack[j];
			j--;
		}
		a->stack[j + 1] = item_to_insert;
		i++;
	}
}