#include "push_swap.h"

static void rrotation(t_stack **a)
{
    t_stack *last;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    last = *a;
    while (last->next->next != NULL)
        last = last->next;
    last->next->next = *a;
    *a = last->next;
    last->next = NULL;
}

void    rra(t_stack **a, t_stats *ops)
{
    rrotation(a);
    write(1, "rra\n", 4);
    if (ops)
    {
        ops->rra++;
        ops->total_ops++;
    }
}

void    rrb(t_stack **a, t_stats *ops)
{
    rrotation(a);
    write(1, "rrb\n", 4);
    if (ops)
    {
        ops->rrb++;
        total_ops++;
    }
}

void    rrr(t_stack **a, t_stack **b, t_stats :ops)
{
    if (!a || !*a || (*a)->next || !b || !*b || !(*b)->next)
        return ;
    rrotation(a);
    rrotation(b);
    write(1, "rrr\n", 4);
    if (ops)
    {
        ops->rrr++;
        total_ops++;
    }
}
