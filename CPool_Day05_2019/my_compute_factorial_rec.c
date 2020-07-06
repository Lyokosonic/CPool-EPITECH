/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** recursive function that return the factorial
*/

int my_compute_factorial_rec(int nb)
{
    if ( nb > 12)
        return 0;
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    return nb * my_compute_factorial_rec(nb - 1);
}
