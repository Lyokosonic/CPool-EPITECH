/*
** EPITECH PROJECT, 2019
** unit test part 3
** File description:
** my_str_printable
*/

#include <criterion/criterion.h>

Test(my_str_isprintable, test_my_str_isprintable)
{
    char str[] = "salut";
    char str2[] = "";

    int test = my_str_isprintable(str);
    cr_assert(test == 1);

    int test2 = my_str_isprintable(str2);
    cr_assert(test2 == 1);

}
