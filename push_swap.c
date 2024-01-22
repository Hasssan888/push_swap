#include "push_swap.h"

t_list *sort_stacke(t_list *stacke_a)
{
  t_list *ptr = stacke_a;

    if (lst_size(ptr) == 3)
    {
      if (!(ptr->data < ptr->next->data && ptr->next->data < ptr->next->next->data))
      {
        if (ptr->data < ptr->next->data && ptr->data < ptr->next->next->data)
        {
          sa(ptr);
          write(1, "sa\n", 3);
          stacke_a = ra(ptr);
          write(1, "ra\n", 3);
        }
        else if (ptr->data < ptr->next->data && ptr->data > ptr->next->next->data)
        {
          stacke_a = rra(ptr);
          write(1, "rra\n", 4);
        }
        else if (ptr->data > ptr->next->data && ptr->data < ptr->next->next->data)
        {
          sa(ptr);
          write(1, "sa\n", 3);
        }
        else if (ptr->data > ptr->next->data && ptr->data > ptr->next->next->data)
        {
          if (ptr->next->data < ptr->next->next->data)
          {
            stacke_a = ra(stacke_a);
            write(1, "ra\n", 3);
          }
          else
          {
            sa(stacke_a);
            write(1, "sa\n", 3);
            stacke_a = rra(stacke_a);
            write(1, "rra\n", 4);
          }
        }
      }   
        
       return (stacke_a) ;
    }   
}

