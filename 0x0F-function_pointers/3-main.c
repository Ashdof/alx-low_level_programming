#include "3-calc.h"

/**
 * main - test the functions
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int val1, val2, ans;
	char *opt;

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = atoi(argv[1]);
	opt = argv[2];
	val2 = atoi(argv[3]);

	if (!(get_op_func(opt)) || opt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opt == '/' || *opt == '%') && (val2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	ans = get_op_func(opt)(val1, val2);
	printf("%d\n", ans);

	return (0);
}
