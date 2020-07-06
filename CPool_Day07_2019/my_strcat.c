/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

int my_strlen_for_strcat(char const *str)
{
    int i ;
    for (i = 0  ;str[i] != '\0'; i++)
    {
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int i;
    int dest_length = my_strlen_for_strcat(dest);
    for (i = 0; src[i] ; ++i)
        dest[dest_length++] = src[i];
    dest[dest_length] = '\0';
    return dest;
}
