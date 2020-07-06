/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** return the smallest number that is greater than or equal to the number
*/

int my_is_prime2(int nb)
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

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
    {
        return (2);
    }
    if (nb % 2 == 0)
    {
        nb = nb + 1;
    }
    while (!my_is_prime2(nb))
    {
        nb = nb + 2;
    }
    return (nb);
}
