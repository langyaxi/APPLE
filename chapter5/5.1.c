#include <stdio.h>
#define SIXTY 60
int main(void)
{
	int x;
	printf("enter the minute :");
	scanf("%d",&x);
	while (x>0)
	{
		printf("%d minute is %d hour %d minute\n", x, (int)x / SIXTY, x%SIXTY);
		printf("enter the minute :");
		scanf("%d", &x);
	}

	getchar();
	getchar();
	return 0;
}