#include "../push_swap.h"

int	get_max_bits(t_stack *a)
{
	int	max;
	int	bits;

	if (!a)
		return (0);
	max = a->index;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	if (max == 0)
		return (1);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
