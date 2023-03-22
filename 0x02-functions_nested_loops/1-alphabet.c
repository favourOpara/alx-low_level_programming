#include <stdio.h>
#include "main.h"

/**
 *main - Prints letters in the alphabet
 *Return: 0
 */


void print_lower_alphabets() 
{
    char c = 'a';
    while (c <= 'z') 
    {
        putchar(c);
        c++;
    }
    putchar('\n');
}

int main() 
{
    print_lower_alphabets();
    return 0;
}

