/*
** EPITECH PROJECT, 2019
** unit tests part 2
** File description:
** my_strstr
*/

#include <criterion/criterion.h>
#include <string.h>

Test(my_strstr, test_for_strstr)
{
    char str[] = "Salut tout le monde";
    char to_find[] = "to";
    char str2[] = "Salut tout le monde";
    char to_find2[] = "le";
    char str3[] = "Salut tout le monde";
    char to_find3[] = "mo";

    char *tmp = my_strstr(strdup(str), to_find);
    my_strstr(strdup(str), to_find);
    cr_assert_str_eq(tmp, "tout le monde");
    char *tmp2 = my_strstr(strdup(str2), to_find2);
    my_strstr(strdup(str2), to_find2);
    cr_assert_str_eq(tmp2, "le monde");
    char *tmp3 = my_strstr(strdup(str3), to_find3);
    my_strstr(strdup(str3), to_find3);
    cr_assert_str_eq(tmp3, "monde");
}
