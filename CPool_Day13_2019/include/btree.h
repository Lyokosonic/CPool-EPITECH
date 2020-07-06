/*
** EPITECH PROJECT, 2019
** btree
** File description:
** btree
*/

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;
