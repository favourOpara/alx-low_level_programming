#include<stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on
 * return: 0
 */

int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float f;
        
        printf("size of a char: %lu byte(s)\n", sizeof(a));
        printf("size of an int: %lu byte(s)\n", sizeof(b));
        printf("size of a long int: %lu byte(s)\n", sizeof(c));
        printf("size of a long long int: %lu byte(s)\n", sizeof(d));
        printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
