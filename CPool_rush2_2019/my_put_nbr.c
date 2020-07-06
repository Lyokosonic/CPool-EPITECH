/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int my_put_nbr(int nb)
{
    int i = 10;
    int j;
    int k;
    if (nb < 10) {
        my_putchar('0' + nb);
    } else {
        while ((nb /i) > 10) {
            i = i * 10;
        }
        while (i >= 10) {
            j = nb % i;
            k = (nb - j)/i;
            my_putchar('0' + k);
            i = i / 10;
            nb = j;
        }
        my_putchar('0' + nb);
    }
}
