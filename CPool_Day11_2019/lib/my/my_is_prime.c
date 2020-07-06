/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** return 1 if the number is prime and 0 if not
*/

int my_is_prime(int nb)
{
    int i;
    if (nb == 0 || nb == 1 || nb < 0) {
        return 0;
    }
    for (i = 2; i < nb; i++)
    {
        if (nb%i == 0)
            return 0;
    }
    return 1;
}
