/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** print the alphabet
*/

#include <stdio.h>
#include <unistd.h>

int my_print_alpha(void)
{
    char alphabet;
    alphabet = 'a';
    while (alphabet <= 'z')
    {
        my_putchar(alphabet);
        alphabet++;
    }
}
