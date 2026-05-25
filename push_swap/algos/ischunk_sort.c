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
int	find_max(t_stack *a)
{
	int	max;

	if (!a)
		return (0);
	max = a->content;
	while (a)
	{
		if (a->content > max)
			max = a->content;
		a = a->next;
	}
	return (max);
}

int	max_position(t_stack *b)
{
	int	max;
	int	pos;
	int	i;

	max = find_max(b);
	pos = 0;
	i = 0;
	if (!b)
		return (0);
	while (b)
	{
		if (b->content == max)
		{
			pos = i;
			break ;
		}
		i++;
		b = b->next;
	}
	return (pos);
}
