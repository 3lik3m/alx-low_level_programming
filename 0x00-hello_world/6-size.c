#include <stdio.h>

/**
 * main - print the size of various types on the computer
 *
 * Return: 0 when successful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
print("size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
