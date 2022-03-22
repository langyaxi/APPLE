#include <stdio.h>

int main(void)
{
	int ch[8],i;
	printf("enter eight integer:");
	for (i = 0; i < 8; i++)
	{
		scanf("%d",&ch[i]);
	}
	for (i = 7; i >= 0;i--)
	{
		printf("%d", ch[i]);
	}

	getchar();
	getchar();
	return 0;
}
