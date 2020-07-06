/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** capitalizes the first letter of each word
*/

char *my_strcapitalize(char *str)
{
    int i = 1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i - 1] != ' ')
                str[i] = str[i] - ('A' - 'a');
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i - 1] == ' ')
                str[i] = str[i] + ('A' - 'a');
        }
        i = i + 1;
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] + ('A' - 'a');
    return (str);
}
