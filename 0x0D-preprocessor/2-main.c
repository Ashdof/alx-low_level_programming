#include <stdio.h>

/**
 * main - print name of file
 * 
 * description: this program prints the name of the file it was
 * compiled from
 *
 * Return: 0 (Always success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
