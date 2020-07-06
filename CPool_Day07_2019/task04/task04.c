/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** displays its arguments
*/

void my_putchar_arg(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
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
