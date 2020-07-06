/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** print the all the number.
*/

#include <stdio.h>
#include <unistd.h>

void my_print_combbis(int i, int j)
{
    char k;
    k = j + 1;
    while (k <= 9) {
        my_putchar(i + 48);
        my_putchar(j + 48);
        my_putchar(k + 48);
        if (i != 7) {
            my_putchar(',');
            my_putchar(' ');
        }
        k++;
    }
}

int my_print_comb(void)
{
    char i, j;
    i = 0;
    while (i <= 7) {
        j = i + 1;
        while (j <= 8) {
            my_print_combbis(i, j);
            j++;
        }
        i++;
    }
}
