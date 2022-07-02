#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chartype;
	int intype;
	long longintype;
	unsigned long unsignedintype;
	float floatype;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(intype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(unsignedintype));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatype));
	return (0);
}
