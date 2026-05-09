#include "push_swap.h"

int is_sorted(t_stack *a)
{
    if (!a)
        return (0);
    while(a && a->next)
    {
        if (a->content > a->next->content)
            return (0);
        a = a->next;
    }
    return (1);
}
void    is_chunk_sorting(t_stack **a, t_stack **b, t_stats *ops)
{
    int size;
    int chunk_size;

    if (!*a || is_sorted(*a) == 1)
        return ;
}