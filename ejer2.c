#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	for (int i = 0; i <= n; i++)
	{
		printf("%d\n", i);
		fork();
	}
	return 0;
}