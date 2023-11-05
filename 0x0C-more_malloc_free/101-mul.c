#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - compute length of string
 * @str: a pointer to the string
 *
 * description: this function computes the length of a string
 *
 * Return: the length of the string
 */
int find_len(char *str)
{
	char *p = str;

	while (*p)
		p++;

	return (p - str);
}

/**
 * create_xarray - create an array of characters
 * @size: the size of the array
 *
 * description: this function creates an array of size size and
 * initializes it with the 'x' character
 *
 * Return: a pointer to the array or exits with status code 98
 * if it fails
 */

char *create_xarray(int size)
{
	char *mem;
	int i;

	mem = malloc(sizeof(char) * size);

	if (mem == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		mem[i] = 'x';

	mem[i] = '\0';

	return (mem);
}

/**
 * iterate_zeroes - skip zeros
 * Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: a pointer to the string of numbers
 *
 * description: this function iterates through a string of numbers
 * and skips all leading zeros until it hits a non-zero number
 *
 * Return: a pointer to the next non-zero number.
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit -  convert a digit character to a corresponding integer
 * @c: the character to be converted
 *
 * description: this function converts a character to its
 * corresponding integer value
 *
 * Return: the converted int
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - multiplies a string of numbers by a single digit
 * @prod: a pointer to the buffer to store the result
 * @mult: a pointer to the string of digits
 * @digit: the single digit
 * @zeroes: the necessary number of leading zeroes
 *
 * description: this function multiplies a string of digits by a
 * single digit. it exits with a status code of 98 if it encounters
 * a non-digit value
 *
 * Return: nothing
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - add numbers stored as strings
 * @final_prod: a pointer to the buffer storing the running final product
 * @next_prod: a pointer to the next value to be added
 * @next_len: the length of next_prod
 *
 * description: this function adds two numbers stored as strings
 *
 * Return: nothing
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argv: the number of arguments passed to the program
 * @argc: an array of pointers to the arguments
 *
 * description: this function invokes the other functions and
 * computes the sum of two positive integers passed as strings
 *
 * Return: always 0 (success) or it exits with a status code of
 * 98 if it fails
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
