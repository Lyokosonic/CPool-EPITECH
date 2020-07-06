/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** function that displays
*/

#include <stdio.h>
#include <unistd.h>

void my_print_comb2bis(int i, int j, int k, int L)
{
    while (k <= 9) {
        while (L <= 9) {
            my_putchar(i + 48);
            my_putchar(j + 48);
            my_putchar(' ');
            my_putchar(k + 48);
            my_putchar(L + 48);
            if (i != 9 || j != 8 || k != 9 || L != 9) {
                my_putchar(',');
                my_putchar(' ');
            }
            L++;
        }
        L = 0;
        k++;
    }
}

int my_print_comb2(void)
{
    char i, j, k, L;
    i = 0;
    j = 0;
    k = 0;
    L = 1;
    while (i <= 9) {
        while (j <= 9) {
            my_print_comb2bis(i, j, k, L);
            j++;
            k = i;
            L = j + 1;
        }
        i++;
        j = 0;
        L = 1;
        k = i;
    }
}
