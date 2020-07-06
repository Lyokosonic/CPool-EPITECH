/*
** EPITECH PROJECT, 2019
**  my_print_digits
** File description:
** print the digit
*/

#include <stdio.h>
#include <unistd.h>

int my_print_digits(void)
{
    char digit;
    digit = '0';
    while (digit <= '9') {
        my_putchar(digit);
        digit++;
    }
}
