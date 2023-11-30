#include <stdio.h>
#include <unistd.h>
/**
 * 		1st fork
 * 		__|______
 * 		|       |
 *  2st fork   2st fork id = 0 (x)
 * 	__|_____			|
 * |        |			print
 * print	print id = 0
*/
int main()
{
	int pid = fork();
	if (pid != 0) {
		fork();
	}
	printf("I am parent process, pid = %d\n", pid);
	return 0;
}
