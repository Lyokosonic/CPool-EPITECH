#!/bin/bash

gcc -o my_putchar.o -c my_putchar.c
gcc -o my_isneg.o -c my_isneg.c
gcc -o my_put_nbr.o -c my_put_nbr.c
gcc -o my_swap.o -c my_swap.c
gcc -o my_putstr.o -c my_putstr.c
gcc -o my_strlen.o -c my_strlen.c
gcc -o my_getnbr.o -c my_getnbr.c
gcc -o my_sort_int_array.o -c my_sort_int_array.c
gcc -o my_compute_power_rec.o -c my_compute_power_rec.c
gcc -o my_compute_square_root.o -c my_compute_square_root.c
gcc -o my_is_prime.o -c my_is_prime.c
gcc -o my_find_prime_sup.o -c my_find_prime_sup.c
gcc -o my_strcpy.o -c my_strcpy.c
gcc -o my_strncpy.o -c my_strncpy.c
gcc -o my_revstr.o -c my_revstr.c
gcc -o my_strstr.o -c my_strstr.c
gcc -o my_strcmp.o -c my_strcmp.c
gcc -o my_strncmp.o -c my_strncmp.c
gcc -o my_strupcase.o -c my_strupcase.c
gcc -o my_strlowcase.o -c my_strlowcase.c
gcc -o my_strcapitalize.o -c my_strcapitalize.c
gcc -o my_str_isalpha.o -c my_str_isalpha.c
gcc -o my_str_isnum.o -c my_str_isnum.c
gcc -o my_str_islower.o -c my_str_islower.c
gcc -o my_str_isupper.o -c my_str_isupper.c
gcc -o my_str_isprintable.o -c my_str_isprintable.c
gcc -o my_showstr.o -c my_showstr.c
gcc -o my_showmem.o -c my_showmem.c
gcc -o my_strcat.o -c my_strcat.c
gcc -o my_strncat.o -c my_strncat.c

ar rcs libmy.a *.o

rm *.o
