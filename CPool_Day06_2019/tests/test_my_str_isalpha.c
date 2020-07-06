/*
** EPITECH PROJECT, 2019
** unit test part 3
** File description:
** my_str_isalpha
*/

#include <criterion/criterion.h>

Test(my_str_isalpha, test_for_isalpha)
{
    char str[] = "Salut";
    char str2[] = "Salut@";
    int test = my_str_isalpha(str);
    cr_assert(test == 1);
    int test2 = my_str_isalpha(str2);
    cr_assert(test2 == 0);
}
