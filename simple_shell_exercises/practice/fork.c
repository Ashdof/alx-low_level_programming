#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid, ppid;

	printf("Before fork, I am one\n");

	pid = fork();

	if (pid == -1)
	{
		perror("Fork unsuccessful\n");
		return (1);
	}
	if (pid == 0)
	{
		sleep(40);
		printf("I am the child.\n");
	       	printf("I am an orphan because my actual parent left me behind\n");
		printf("When I'm left behind, I am adopted by the process that started my parent\n");
		printf("My PID is: %u\n", getpid());
	}
	else
	{
		ppid = getpid();
		printf("I am the parent\n");
		printf("My PID is: %u\n", ppid);
		sleep(20);
	}

	printf("I have ended my activity and exited the process table.\n");

	return (0);
}
