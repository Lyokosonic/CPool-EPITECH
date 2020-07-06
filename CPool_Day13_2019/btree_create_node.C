/*
** EPITECH PROJECT, 2019
** btree_create_node
** File description:
** btree_create_node
*/

#include "include/btree.h"

btree_t btree_create_node(void *item)
{
    t_btree *i;
    
    i = malloc(sizeof(*i));
    while (i)
    {
        i->left = NULL;
        i->right = NULL;
        i->item = item;
    }
    return (i);
}
