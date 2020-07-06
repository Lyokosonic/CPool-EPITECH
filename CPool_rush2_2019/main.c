/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int main(int ac, char **av)
{
    int counters[26] = {0};
    char tmp;
    my_count_number(av[1],av,counters);
    for(int i = 2; i < ac; i++){
        tmp = to_lower(av[i][0]);
        my_putchar(av[i][0]);
        my_putchar(':');
        my_put_nbr(counters[tmp - 'a']);
        my_putchar('\n');
    }
    return(0);
}

