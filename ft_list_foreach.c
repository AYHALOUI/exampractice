#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *ptr;

    ptr = begin_list;
    while (ptr)
    {
        (*f)(ptr->data);
        ptr = ptr->next;
    }
}


void    ft_list_foreach1(t_list *begin_list, void (*f)(void *))
{
    t_list *ptr;

    ptr = begin_list;
    while (ptr)
    {
        (*f)(ptr->data);
        ptr = ptr->next;
    }
}


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || begin_list == NULL)
        return;
    t_list *cur = *begin_list;

    if (cmp(cur->data, data_ref))
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }

    cur = *begin_list;
    ft_list_remove_if(&cur->next, data_ref, cmp);
}

void ft_list_remove_if2(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
    {
        return;
    }
    t_list *cur = *begin_list;
    while (cmp(cur->data, data_ref))
    {
        *begin_list = cur->data;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp)
    }
}