/*
 * File: 11-print_to_98.c
 * Auth: Ostian Stéphane ostian1996
 */

#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: parameter
 * Return: void.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            if (n == 98)
            {
                printf("%d", n);
                printf("\n");
                break;
            }
            else
            {
                printf("%d, ", n);
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            if (n == 98)
            {
                printf("%d", n);
                printf("\n");
                break;
            }
            else
            {
                printf("%d, ", n);
            }
        }
    }
}