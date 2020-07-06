/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** returns the square root
*/

int my_compute_square_root(int nb)
{
    int a = 1;
    int b = 0;
    if (a < 0)
        return 0;
    while (a <= nb)
    {
        b = a * a;
        if (b == nb)
        {
            return (a);
        }
        a = a + 1;
    }
    return (0);
}
