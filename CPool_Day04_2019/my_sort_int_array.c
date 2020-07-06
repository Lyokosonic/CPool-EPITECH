/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** my_sort_int_array
*/

int my_sort_int_array(int *tab, int size)
{
    int i;
    int t = tab[i];
    for (i = 0; i!= size; i++) {
        if (i > 0 && tab[i] < tab[i - 1]) {
            tab[i] = tab[i - 1];
            tab[i - 1] = t;
            i = i - 2;
        }
    }
}
