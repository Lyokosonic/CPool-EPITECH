/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** that returns the number of elements on the list.
*/

#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int nb;
    for (nb = 0; begin != NULL; nb++) {
        begin = begin->next;
    }
    return (nb);
}
