
#include "push_swap.h"

int main() {

t_list *stacke_a;

  
  stacke_a = create_node(1);
  lstadd_back(&stacke_a,create_node(3));
  lstadd_back(&stacke_a,create_node(2));
  
  stacke_a = sort_stacke(stacke_a);
  
  t_list *ptr = stacke_a;
  
  while (ptr != NULL)
  {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
  
    
  stacke_a = create_node(2);
  lstadd_back(&stacke_a,create_node(3));
  lstadd_back(&stacke_a,create_node(1));
  
  stacke_a = sort_stacke(stacke_a);
  
  t_list *p = stacke_a;
  
  while (p != NULL)
  {
    printf("%d\n", p->data);
    p = p->next;
  }
  
  
  stacke_a = create_node(2);
  lstadd_back(&stacke_a,create_node(1));
  lstadd_back(&stacke_a,create_node(3));
  
  stacke_a = sort_stacke(stacke_a);
  
  t_list *v = stacke_a;
  
  while (v != NULL)
  {
    printf("%d\n", v->data);
    v = v->next;
  }
  
  
    
  stacke_a = create_node(3);
  lstadd_back(&stacke_a,create_node(1));
  lstadd_back(&stacke_a,create_node(2));
  
  stacke_a = sort_stacke(stacke_a);
  
  t_list *x = stacke_a;
  
  while (x != NULL)
  {
    printf("%d\n", x->data);
    x = x->next;
  }
  
  stacke_a = create_node(3);
  lstadd_back(&stacke_a,create_node(2));
  lstadd_back(&stacke_a,create_node(1));
  
  stacke_a = sort_stacke(stacke_a);
  
  t_list *t = stacke_a;
  
  while (t != NULL)
  {
    printf("%d\n", t->data);
    t = t->next;
  }
  //stacke_a->next->next = create_node(2);
  

  return 0;

}