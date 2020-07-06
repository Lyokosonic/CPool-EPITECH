/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** display
*/

#include <stdio.h>
#include <unistd.h>

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
