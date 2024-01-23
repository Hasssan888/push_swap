#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *stacke_a;
    t_list *stacke_b;
    int i = 1;

    stacke_a = create_node(ft_atoi(av[i]));
    i++;
    while (i < ac)
    {
        lstadd_back(&stacke_a,create_node(ft_atoi(av[i])));
        i++;
    }
    
    int size = lst_size(stacke_a);
    if (size > 3)
    {
        int j = size - 3;
        while (j > 0)
        {
            push_to_b(&stacke_a, &stacke_b);
            j--;
        }
    }
        stacke_a = sort_stacke(stacke_a);
}