#include "libft.h"

void		swap_elem(t_stack *stack, int a, int b)
{
	int		tmp;

	tmp = stack->stack[a];
	stack->stack[a] = stack->stack[b];
	stack->stack[b] = tmp;
}

static int	partition(t_stack *a, int left, int right, int pivot)
{
	while (left <= right)
	{
		while (a->stack[left] < pivot)
			left++;
		while (a->stack[right] > pivot)
			right--;
		if (left <= right)
			swap_elem(a, left++, right--);
	}
	return(left);
}

static void	quicksort(t_stack *a, int left, int right)
{
	int		pivot;
	int		index_divide;
	
	if (left >= right)
		return ;
	pivot = a->stack[(left + right) / 2];
	index_divide = partition(a, left, right , pivot);
	quicksort(a, left, index_divide - 1);
	quicksort(a, index_divide, right);
}

void		quick_sort(t_stack *a)
{
	quicksort(a, 0, a->lenght - 1);
}