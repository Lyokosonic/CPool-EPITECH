/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** function that displays the number given as a parameter.
*/

#include <stdio.h>
#include <unistd.h>

void nbminneg(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('8');
    }
}

void ifnegto0(int nb)
{
    if (nb < 0 && nb != -2147483648) {
        my_putchar('-');
        nb = nb * -1;
    }
}

void my_put_nbrbis(int nb, int i, int j, int k)
{
    i = 10;
    while ((nb /i) > 10) {
        i = i * 10;
    }
    while (i  >= 10) {
        j = nb % i;
        k = (nb - j)/i;
        my_putchar('0'+ k );
        i = i / 10;
        nb = j;
    }
    my_putchar('0' + nb);
}

int my_put_nbr(int nb)
{
    int i;
    int j;
    int k;
    nbminneg(nb);
    if (nb == -2147483648) {
        return (0);
    }
    ifnegto0(nb);
    if (nb < 10 &&  nb != -2147483648) {
        my_putchar('0' + nb);
    } else {
        my_put_nbrbis(nb, i, j, k);
    }
}
