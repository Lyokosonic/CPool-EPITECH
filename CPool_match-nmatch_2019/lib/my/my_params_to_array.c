/*
** EPITECH PROJECT, 2019
** my_params_to_array
** File description:
** my_params_to_array
*/

struct info_param *my_params_to_array(int ac, char **av)
{

    int i = 0;
    struct info_param **array;
    array = malloc(sizeof(struct info_param*) + 1);

    if (array == 0){
        return (0);
    }

    while (i < ac){
        array[i] = malloc(sizeof(struct info_param));
        array[i]->length = my_strlen(av[i]);
        array[i]->str = av[i];
        array[i]->copy = my_strcpy(av[i]);
        array[i]->word_array = my_str_to_word_array(av[i]);
        i = i + 1;
    }
    array[i] = 0;
    return (*array);
}
