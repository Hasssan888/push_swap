#include "push_swap.h"

void  push_to_b(t_list **stacke_a, t_list **stacke_b)
{
    t_list *tmp1 = *stacke_a;
    t_list *tmp2 = *stacke_a;

    if (*stacke_b != NULL)
    {
        t_list *tmp3 = *stacke_b;
        tmp2 = tmp2->next;
        tmp1->next = NULL;
        lstadd_front(&tmp3, tmp1);
        *stacke_a = tmp2;
        *stacke_b = tmp3;
    }
    else
    {
        tmp2 = tmp2->next;
        tmp1->next = NULL;
        *stacke_a = tmp2;
        *stacke_b = tmp1;
    }
}