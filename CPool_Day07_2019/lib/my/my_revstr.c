/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** function that reverses a string
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char k;
    int length = 0;
    for (int m = 0  ;str[m] != '\0'; m++)
    {
        length++;
        j++;
    }
    length--;
    j--;
    while (i < length/2)
    {
        k = str[j];
        str[j] = str[i];
        str[i] = k;
        i++;
        j--;
    }
    return (str);
}
