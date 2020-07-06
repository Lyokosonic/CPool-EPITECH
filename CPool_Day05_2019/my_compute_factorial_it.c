/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** return the factorial of the number
*/

#include <unistd.h>
#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int fact = 1;
    int i = 0;
    if ( nb > 12)
        return 0;
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    for (i = 1; i <= nb; i++)
        fact = fact * i;
    return fact;
}
