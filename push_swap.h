#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
  int data;
  struct s_list *next;
} t_list;

//push_swap.c
t_list *sort_stacke(t_list *stacke_a);

//reuls.c
void  sa(t_list *stacke_a);
t_list *ra(t_list *stacke_a);
t_list *rra(t_list *stacke_a);

//link_list.c
t_list *create_node(int data);
void    list_append(t_list **list, t_list *new_node);
void    lstadd_back(t_list **lst, t_list *new);
int     lst_size(t_list *lst);
t_list  *last_node(t_list *stacke_a);
void    lstadd_front(t_list **lst, t_list *new);

//utilis.c
int ft_atoi(char *str);

//push_to_b
void  push_to_b(t_list **stacke_a, t_list **stacke_b);

#endif