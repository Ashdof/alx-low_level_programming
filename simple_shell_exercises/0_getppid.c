#include <stdio.h>
#include <unistd.h>

/**
 * main - print parent ID
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t my_ppid, my_pid;

	my_ppid = getppid();
	my_pid = getpid();

	printf("Child PID: %u\n", my_pid);
	printf("Parent PID: %u\n", my_ppid);

	return 0;
}
