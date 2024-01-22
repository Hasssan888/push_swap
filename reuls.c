#include "push_swap.h"

void  sa(t_list *stacke_a)
{
  t_list *ptr = stacke_a;
  int swap;
  
  swap = ptr->data;
  ptr->data = ptr->next->data;
  ptr->next->data = swap;
}

t_list *ra(t_list *stacke_a)
{
  t_list *ptr = stacke_a;
  stacke_a = stacke_a->next;
  
  ptr->next = NULL;
  lstadd_back(&stacke_a, ptr);
  return (stacke_a);
  
}
  
t_list *rra(t_list *stacke_a)
{
  t_list *ptr = last_node(stacke_a);
  stacke_a->next->next = NULL;
  
  //stacke_a = list_append(&stacke_a, ptr);
  ptr->next = stacke_a;
  
  stacke_a = ptr;
  return (stacke_a);
}