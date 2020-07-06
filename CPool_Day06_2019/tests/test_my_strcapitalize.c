/*
** EPITECH PROJECT, 2019
** test unitaire par 2
** File description:
** my_strcapitalize
*/

#include <criterion/criterion.h>

Test(my_strcapitalize, test_for_strcapitalize)
{
    char str[] = "salut bonjour";
    char str2[] = "hi hello";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Salut Bonjour");

    my_strcapitalize(str2);
    cr_assert_str_eq(str2, "Hi Hello");
}
