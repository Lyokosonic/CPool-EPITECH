/*
** EPITECH PROJECT, 2019
** my_sort_params
** File description:
** displays all its arguments, in ascii order.
*/

int my_strcmp_arg_sort(char const *s1, char const *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i = i + 1;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return (0);
    }
    if (s1[i] < s2[i]) {
        return (-1);
    }
    if (s1[i] > s2[i]) {
        return (1);
    }
    return (0);
}

void my_putchar_arg(char c)
{
    write(1, &c, 1);
}

void my_print_params(int argc, char *argv)
{
    int i;
    int j = 0;
    for (i = 0; i < argc; i++) {
        for (j = 0; argv[i][j] != '\0'; j++) {
            my_putchar_arg(argv[i][j]);
        }
        my_putchar_arg('\n');
        j = 0;
    }
    return 0;
}

int         main(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        my_print_params(argc, argv[i]);
        my_putchar_arg('\n');
        i++;
    }
    return (0);
}
