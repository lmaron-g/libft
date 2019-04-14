#include "../../includes/libft.h"

int         duplicates(int *stack, int lenght)
{
    int     i;
    int     j;

    i = 0;
    while (i < lenght - 1)
    {
        j = i + 1;
        while (j < lenght)
        {
            if (stack[i] == stack[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}
