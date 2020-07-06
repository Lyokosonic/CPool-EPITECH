/*
** EPITECH PROJECT, 2019
** get_color
** File description:
** returns the color as an int by handling its three RGB components. 
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color;
    color = red;
    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return (color);
    printf("%d", color);
}
