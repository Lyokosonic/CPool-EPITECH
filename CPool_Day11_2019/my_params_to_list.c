/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** creates a new list from the command line arguments.
*/

#include "include/my.h"
#include "include/mylist.h"

linked_list_t *add_list(void *data, linked_list_t *list)
{
    linked_list_t *my_new_list;
    my_new_list = malloc(sizeof(linked_list_t));
    my_new_list->data = data;
    my_new_list->next = list;
    return (my_new_list);
}

linked_list_t *my_params_to_list(int ac, char const * const *av)
{
    linked_list_t *list;
    int i = 0;
    list;
    for ( i = 0; i < ac; i++) {
        list = add_list(av[i], list);
    }
    return (list);
}
