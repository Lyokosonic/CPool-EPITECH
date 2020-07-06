/*
** EPITECH PROJECT, 2019
** fir tree
** File description:
** displays a fir tree based on its given size
*/

#include <unistd.h>

static void check_error(int size)
{
    if (size == 0)
        return ;
    if (size < 0) {
        write(2, "The argument must be positive!\n", 31);
        return ;
    }
}

static int get_columns(int size)
{
    int size2 = 1;
    int li = 0;
    int max_li = 0;
    int col = 1;
    while (size2 < size) {
        max_li = size2 + 3;
        li = 1;
        while (li < max_li) {
            col = col + 2;
            li = li + 1;
        }
        size2 = size2 + 1;
        col = col - (size2 / 2) * 2;
    }
    return (col);
}

static int put_tree(int total_max_col, int col, int max_col)
{
    int col2 = 1;
    while (col2 < (total_max_col - col + 2) / 2) {
        write(1, " ", 1);
        col2 = col2 + 1;
    }
    col2 = 1;
    while (col2 <= col && col <= max_col) {
        write(1, "*", 1);
        col2 = col2 + 1;
    }
    write(1, "\n", 1);
    return (col + 2);
}

static void put_bottom(int size, int total_max_col, int max_li, int li2)
{
    int col = 0;
    int col2 = 0;
    if (size % 2 == 1)
        col = size;
    else
        col = size + 1;
    while (li2 <= max_li) {
        col2 = 1;
        while (col2 < (total_max_col - col + 2) / 2) {
            write(1, " ", 1);
            col2 = col2 + 1;
        }
        col2 = 1;
        while (col2 <= col) {
            write(1, "|", 1);
            col2 = col2 + 1;
        }
        write(1, "\n", 1);
        li2 = li2 + 1;
    }
}

void tree(int size)
{
    int max_li = 0;
    int total_max_li = 0;
    int col = 0;
    int li2 = 0;
    int size2 = 0;
    if (size <= 0)
        return (check_error(size));
    total_max_li = size + 3;
    size2 = 1;
    while (size2 <= size) {
        col = get_columns(size2);
        max_li = size2 + 3;
        li2 = 1;
        while (li2 <= max_li) {
            col = put_tree(get_columns(size) + total_max_li * 2 - 2,
                           col, col * max_li * 2);
            li2 = li2 + 1;
        }
        size2 = size2 + 1;
    }
    put_bottom(size, get_columns(size) + total_max_li * 2 - 2, size, 1);
}
