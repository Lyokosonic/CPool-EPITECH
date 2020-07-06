/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** swaps the content of two integer
*/

void my_swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
