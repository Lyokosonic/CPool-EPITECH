/*
** EPITECH PROJECT, 2019
** unit test part 3
** File description:
** my_str_isalpha
*/

#include <criterion/criterion.h>

Test(my_str_islower, test_my_str_islower)
{
    char str[] = "salut";
    char str2[] = "Bonjour";
    char str3[] = "hey, how are you? 42WORds forty-two; fifty+one";
    char str4[] = "";

    int test = my_str_islower(str);
    cr_assert(test == 1);
    int test2 = my_str_islower(str2);
    cr_assert(test2 == 0);
    int test3 = my_str_islower(str3);
    cr_assert(test3 == 0);
    int test4 = my_str_islower(str4);
    cr_assert(test4 == 1);
}
