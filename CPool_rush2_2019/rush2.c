/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** rush2
*/

#include <stdio.h>


void my_putchar(char c)
{
    write(1, &c,  1);
}

char to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        return(c + 'a' - 'A');
    return(c);
}

int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    return(0);
}
                                    
int my_count_number(char *str, char **av, int *counters)
{
    int i = 0;
    char tmp; 
    for (i = 0; str[i] != '\0'; i++) {
        if (is_alpha(str[i]) == 1){
            tmp = to_lower(str[i]);
            counters[tmp - 'a']++;
        }
    }
    return(0);
}


