#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
 // Add this line to include the "sys/wait.h" header file
/**
 * 		1st fork
 * 		__|______
 * 		|       |
 *  2st fork   2st fork id = 0 (x)
 * 	__|_____			|
 * |        |			print
 * print	print id = 0
 */
/*int main()
{
	int pid = fork();
	if (pid != 0) {
		fork();
	}
	printf("I am parent process, pid = %d\n", pid);
	return 0;
}*/
/****************************************************************0*/

/*int main() {
	int pid = fork();

	if (pid == 0) {
		// Child process
		printf("I am the child process, my PID is %d\n", getpid());
	} else if (pid > 0) {
		// Parent process
		printf("I am the parent process, my PID is %d, and my child's PID is %d\n", getpid(), pid);
	} else {
		// Error handling if fork fails
		fprintf(stderr, "Fork failed\n");
		return 1;
	}

	return 0;
}*/

/**************************************************************/
//wait
/*int main()
{
	int pid = fork();
	int n;
	if (pid == 0)
	{
		n = 1;
	}
	else
	{
		n = 6;
		// wait();
	}

	for (int i = n; i < n + 5; i++)
	{
		if (i > 9)
		{
			putchar(i / 10 + '0');
		}

		putchar(i % 10 + '0');
		fflush(stdout);
	}
	return 0;
}*/
//********************************************************************************
//id
	//parent process of chiled id = main process id
	//chilld id = main pid
int main()
{
	int pid = fork();
	if (pid == 0)
	{
		printf("the child process id is %d\nand his parant is %d and his pid is : %d", getpid(), getppid(), pid);
		printf("\n\n");
		
	}
	else
	{
		//wait(NULL);
		sleep(1);
		//waitpid(pid, NULL, 0);

		printf("the main process id is %d\nand his parant is %d his pid is : %d", getpid(), getppid(), pid);
		printf("\n\n");
	}
	int res = wait(NULL);
	printf("the res is : %d\n", res);
	return 0;
}