/*
** EPITECH PROJECT, 2019
** do-op
** File description:
** Write a program called do-op that computes an operation.
*/

#include <stdio.h>
#include "./../include/my.h"

int my_addition(char *nb1, char *nb2)
{
    int n;

    n = my_getnbr(nb1) + my_getnbr(nb2);
    my_put_nbr(n);
    my_putchar('\n');
    return (0);
}

int my_substract(char *nb1, char *nb2)
{
    int n;

    n = my_getnbr(nb1) - my_getnbr(nb2);
    my_put_nbr(n);
    my_putchar('\n');
    return (0);
}

int my_divide(char *nb1, char *nb2)
{
    int n;

    n = my_getnbr(nb1) / my_getnbr(nb2);
    my_put_nbr(n);
    my_putchar('\n');
    return (0);
}

int my_multiplie(char *nb1, char *nb2)
{
    int n;

    n = my_getnbr(nb1) * my_getnbr(nb2);
    my_put_nbr(n);
    my_putchar('\n');
    return (0);
}

int     my_modulo(char *nb1, char *nb2)
{
    int   n;

    n = my_getnbr(nb1) % my_getnbr(nb2);
    my_put_nbr(n);
    my_putchar('\n');
    return (0);
}

int calculate(char *nb1, char *operator, char *nb2)
{
    int(*str[5])(char*, char*);

    str[0] = &my_addition;
    str[1] = &my_substract;
    str[2] = &my_divide;
    str[3] = &my_multiplie;
    str[4] = &my_modulo;
    if (operator[0] == '+')
        str[0](nb1, nb2);
    else if (operator[0] == '-')
        str[1](nb1, nb2);
    else if (operator[0] == '/')
        str[2](nb1, nb2);
    else if (operator[0] == '*')
        str[3](nb1, nb2);
    else if (operator[0] == '%')
        str[4](nb1, nb2);
}

int main(int argc, char **argv)
{
    if (argc == 4)
        calculate(argv[1], argv[2], argv[3]);
    else
        my_putstr("Usage : ./do-op number operator number\n");
    return (0);
}
