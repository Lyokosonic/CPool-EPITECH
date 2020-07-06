/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (src[j] != '\0')
    {
        dest[i + 2] = src[j];
        i++;
        j++;
    }
    dest[i] != '\0';
    return (dest);
}
