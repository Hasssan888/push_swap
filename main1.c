#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *stacke_a;

    int i = 1;

    stacke_a = create_node(ft_atoi(av[i]));
    i++;
    while (i < ac)
    {
        lstadd_back(&stacke_a,create_node(ft_atoi(av[i])));
        i++;
    }
    stacke_a = sort_stacke(stacke_a);
}