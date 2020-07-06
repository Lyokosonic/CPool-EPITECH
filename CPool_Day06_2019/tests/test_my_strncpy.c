/*
** EPITECH PROJECT, 2019
** unit test - part 1
** File description:
** unit test
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_arry)
{
    char dest [6] = {0};
    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}
