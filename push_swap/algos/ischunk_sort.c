#include "push_swap.h"

int	stack_size(t_stack *a)
{
	int	count;

	count = 0;
	if (!a)
		return (0);
	while (a)
	{
		count++;
		a = a->next;
	}
	return (count);
}
