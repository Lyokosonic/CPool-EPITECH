/*
** EPITECH PROJECT, 2019
** my_rev_list
** File description:
** reverses the order of the list’s elements
*/

#include "include/list.h"

void my_rev_list(linked_list_t **begin)
{
    t_list *p;
    t_list *before = NULL;
    t_list *after;
    i = *begin;
    while (i->after)
    {
        after = i->after;
        i->after = before;
        before = i;
        i = after;
    }
    i->after = before;
    *begin = i;
    return (0);
}
