/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** print the rev alphabet
*/

#include <stdio.h>
#include <unistd.h>

int my_print_revalpha(void)
{
    char revalphabet;
    revalphabet = 'z';
    while (revalphabet >= 'a') {
        my_putchar(revalphabet);
        revalphabet--;
    }
}
