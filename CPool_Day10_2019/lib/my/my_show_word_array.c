/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** displays the content of an array of words.
*/

void my_putchar_for_show_word_array(char c)
{
    write(1, &c,  1);
}

int my_putstr_for_show_word_array(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar_for_show_word_array(str[i]);
        i++;
    }
}

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != 0) {
        my_putstr_for_show_word_array(tab[i]);
        my_putchar_for_show_word_array('\n');
        i++;
    }
    return (0);
}
