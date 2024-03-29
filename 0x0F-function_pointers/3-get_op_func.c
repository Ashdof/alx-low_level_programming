#include "3-calc.h"

/**
 * get_op_func - select an operation function
 * @s: a pointer to the operator passed as argument to the program
 *
 * description: this function selects the correct function to perform
 * the operation asked by the user.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
