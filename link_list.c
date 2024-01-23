#include "push_swap.h"

t_list *create_node(int data)
{
  t_list *new_node = malloc(sizeof(t_list));
  
  if (new_node == NULL)
    return (NULL);
  new_node->data = data;
  new_node->next = NULL;
  return (new_node);
}

void  list_append(t_list **list, t_list *new_node)
{
  if (list == NULL || new_node == NULL)
    return;
  new_node->next = *list;
  *list = new_node;
}

void  lstadd_back(t_list **lst, t_list *new)
{
  if (lst == NULL || new == NULL)
    return;
  if (*lst == NULL)
  {
    *lst = new;
    return;
  }

  
  t_list *current = *lst;
  while (current->next != NULL)
    current = current->next;
  current->next = new;
}

void    lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return ;
    new->next = *lst;
    *lst = new;
}

int lst_size(t_list *lst)
{
  int count = 0;
  t_list *p = lst;
  
  while (p != NULL)
  {
    count++;
    p = p->next;
  }
  return(count);
}

t_list  *last_node(t_list *stacke_a)
{
  if (stacke_a == NULL)
    return NULL;
  t_list *cur = stacke_a;
  
  while (cur->next != NULL)
    cur = cur->next;
  return (cur);
}