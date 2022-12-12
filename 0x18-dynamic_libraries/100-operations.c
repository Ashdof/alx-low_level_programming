/** 
 * add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return:sum of addition
 *
 */

int add(int a, int b)
{
	int sum = a + b;
	return (sum);
}


/**
 * sub - subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of subtraction
 */

int sub(int a, int b)
{
	int diff = a - b;
	return (diff);
}


/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of multiplication
 */

int mul(int a, int b)
{
	int prod = a * b;
	return (prod);
}


/**
 * div - divide two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);

	int ans = a / b;

	return (ans);
}


/**
 * mod - find the modulo value
 * @: first number
 * @b: second number
 *
 * Return: remainder of operation
 */

int mod(int a, int b)
{
	return (a % b);
}
