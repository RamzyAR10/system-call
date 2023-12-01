#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
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
/*int main()
{
	int pid = fork();
	int did = fork();
	if (pid == 0)
	{
		printf("the child process id is %d\nand his parant is %d and his pid is : %d", getpid(), getppid(), pid);
		printf("\n\n");
		
	}
	else
	{
		//wait(NULL);
		//sleep(1);
		//waitpid(pid, NULL, 0);

		printf("the main process id is %d\nand his parant is %d his pid is : %d", getpid(), getppid(), pid);
		printf("\n\n");
	}
	int res = wait(NULL);
	printf("the res is : %d\n", res);
	return 0;
}*/
/*********************************************************************************************************************/
/*int main(int argc, char const *argv[], char const *envp[])
{
	execlp("ping", "ping", "google.com", NULL);//first argument is the path of the file, second is the name of the file, third is the argument of the file(optional), NULL is the end of the arguments
	//p is for path of first argument
	//l is for list of  all arguments
	//v is for vector of all arguments, like array in stade of list, array of strings have all arguments, except the first argument(the path of the file)
	//e is for environment variables, like the path of the file, the name of the file, the arguments of the file"test = 1", NULL is the end of the arguments

	char* args[] = {"ping", "google.com", NULL};//string array of all arguments
	char* env[] = {"test=3awes elh", NULL};//array of environment variables
	execvpe ("ping", args, env);//first argument is the name of the file, second is array of all arguments, third is array of environment variables



	printf("this line will not be printed\n");//this line will not be printed because the process will be replaced by the new process, so the next line will not be executed, unless we have issue in the execl function
}*/
/********************************************************************************************************************************************************/
//signal handler = function that will be executed when the signal is received to not still executing in the background
//stop the process when issue is happened
/*int main()
{

}*/
/****************************************************************************************************************************/
//enviroment variables
//getenv("PATH");//getenv is a function that take the name of the environment variable and return the value of the environment variable
int main(int argc, char const *argv[], char const *envp[])
{
	char *env; //pointer to char to store the value of the environment variable
	env = getenv("PATH");//get the path of the file
	printf("%s\n", env);//print the path of the file
	return 0;
}*/
/*****************************************************************************************/
//print all environment variables
//char *envp[] is an array of pointers to char to store the value of the environment variables like 2d array
int main(int argc, char const *argv[], char *envp[])
{
	char *env;
	int i = 0;

	while (env != NULL)
	{
		env = envp[i];//pointer to the first element of the array of pointers to char
		printf("%s\n", env);
		i++;
	}
	return 0;
}
	
