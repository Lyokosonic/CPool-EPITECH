/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** iterative function that return the first argument raised
*/

int my_compute_power_it(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    else if (p%2 == 0)
        return my_compute_power_it(nb, p/2) * my_compute_power_it(nb, p/2);
    else
        return nb * my_compute_power_it(nb, p/2) * my_compute_power_it(nb, p/2);
}
