/*
** EPITECH PROJECT, 2019
** count_valid_queens_placements
** File description:
** return the number of possible way to place n queen
*/

int right_to_left(int *queen, int n)
{
    int i = 0;
    int k = i + 1;
    while (i != n && k != n) {
        if (i - queen[k] == k - queen[i])
            return (0);
        k += 1;
        if (k == n) {
            i += 1;
            k = i + 1;
        }
    }
    return (1);
}

int left_to_right(int *queen, int n)
{
    int i = 0;
    int k = i + 1;

    while (i != n && k != n) {
        if (i + queen[k] == k + queen[i])
            return (0);
        k += 1;
        if (k == n) {
            i += 1;
            k = i + 1;
        }
    }
    return (1);
}

int board(int *queen, int n)
{
    int i = 0;
    int k = i + 1;
    while (i != n - 1) {
        if (queen[k] == queen[i])
            return (0);
        k += 1;
        if (k == n) {
            i += 1;
            k = i + 1;
        }
    }
    return (1);
}

int create_possibility(int *queen, int n, int j, int possibility)
{
    int i = 0;
    if (j != n + 1) {
        for (i = 0; i != n; i++) {
            queen[j] = i;
            possibility = create_possibility(queen, n, j + 1, possibility);
        }
    }
    if (j == n) {
        if (board(queen, n) == 1 && right_to_left(queen, n) == 1 &&
            left_to_right(queen, n) == 1 ) {
            possibility += 1;
        }
    }
    return (possibility);
}

int count_valid_queens_placements(int n)
{
    int j = 0;
    int possibility = 0;
    int queen[n];
    possibility = create_possibility(queen, n, j, possibility);
    return (possibility);
}
