/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** reverse the params
*/

void my_putchar_arg2(char c)
{
    write(1, &c, 1);
}

int my_putstr_arg2(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar_arg2(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = argc - 1;
    while (i >= 0)
    {
        my_putstr_arg2(argv[i]);
        i = i - 1;
        my_putchar_arg2('\n');
    }
    return (0);
}
