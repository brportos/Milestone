#include "../push_swap.h"

double	compute_disorder(t_stack *a, t_stats *ops)
{
	int		mistakes;
	int		total_pairs;
	t_stack	*i;
	t_stack	*j;

	mistakes = 0;
	total_pairs = 0;
	i = a;
	if (!a)
		return (0);
	while (i && i->next)
	{
		j = i->next;
		while (j)
		{
			if (i->content > j->content)
				mistakes++;
			total_pairs++;
			j = j->next;
		}
		i = i->next;
	}
	ops->disorder = (double)mistakes / total_pairs;
	return ((double)mistakes / total_pairs);
}

void	sort_three(t_stack **a, t_stats *ops)
{
	int	first;
	int	second;
	int	third;

	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->content;
	second = (*a)->next->content;
	third = (*a)->next->next->content;
	if (first > second && second < third && third > first)
		sa(a, ops);
	else if (first > second && second > third)
	{
		ra(a, ops);
		sa(a, ops);
	}
	else if (first > second && second < third && third < first)
		ra(a, ops);
	else if (first < second && second > third && first < third)
	{
		sa(a, ops);
		ra(a, ops);
	}
	else if (first < second && second > third && first > third)
		rra(a, ops);
}
