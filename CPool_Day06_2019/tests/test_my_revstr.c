/*
** EPITECH PROJECT, 2019
** unit tests - part1
** File description:
** unit test
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_str)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
}
