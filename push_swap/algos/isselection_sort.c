#include "../push_swap.h"

int	find_min(t_stack *a)
{
	int	min;

	if (!a)
		return (0);
	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
}
