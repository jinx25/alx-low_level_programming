#include <stdio.h>

/*
 * main - fuction that prints the size of various types on the computer
 * Return: always 0
 */

int main(void)
{       int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of a int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
