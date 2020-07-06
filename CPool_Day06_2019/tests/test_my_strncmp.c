/*
** EPITECH PROJECT, 2019
** unit test part 2
** File description:
** theteststrncmp
*/

#include <criterion/criterion.h>

Test(my_strncmp, test_for_strncmp)
{
    char src[] = "Salut";
    char dest[] = "Salut";
    char src2[] = "Salut";
    char dest2[] = "Salu";
    char src3[] = "Bon";
    char dest3[] = "Bonjour";

    int test = my_strncmp(src, dest, 3);
    cr_assert(test == 0);

    int test2 = my_strncmp(src2, dest2, 6);
    cr_assert(test2 == 1);

    int test3 = my_strncmp(src3, dest3, 8);
    cr_assert(test3 == -1);
}
