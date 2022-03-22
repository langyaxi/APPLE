#include <stdio.h>

int main(void)
{
	int i,first = 5,week,friend;

	for (i = 0,week= 0,friend=5; friend <= 150;i++)
	{
		week++;
		friend = 2 * (friend - week);
		printf("He has %d friends in the %d week.\n",friend,week);
	}

	getchar();
	getchar();
	return 0;
}