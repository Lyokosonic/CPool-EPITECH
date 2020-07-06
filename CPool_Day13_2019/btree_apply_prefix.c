/*
** EPITECH PROJECT, 2019
** btree_apply_prefix
** File description:
** btree_apply_prefix
*/

#include "include"

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    while (root != root)
    {
        (*applyf)(root->item);
        if (root->left)
            btree_apply_prefix(root->left, applyf);
        if (root->right)
            btree_apply_prefix(root->right, applyf);
    }
}
