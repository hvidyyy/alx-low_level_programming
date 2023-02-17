#include <stdio.h>
/**
 * main - starting code
 *
 * Return: Always 0 means success
 */
int main(void)
{
	char hcharacter;
	int hinteger;
	long hlong;
	long long hlonglong;
	float hfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(hcharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(hinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(hlong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(hlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(hfloat));

	return (0);
}
