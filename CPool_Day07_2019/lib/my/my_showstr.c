/*
** EPITECH PROJECT, 2019
** my_showstr
** File description:
** my_showstr
*/

int my_strlen2showstr(char const *str)
{
    int i ;
    for (i = 0  ;str[i] != '\0'; i++)
    {
    }
    return (i);
}

int my_showstr(char const *str)
{
    int i;
    char j;
    int size;

    size = my_strlen2showstr(str);
    i = 0;
    j = str[0];
    while (i < 16 && i < size)
    {
        if (!(j < 32))
            write(1, &j, 1);
        else
            write(1, ".", 1);
        i = i + 1;
        j = *(str + i);
    }
    return (0);
}
