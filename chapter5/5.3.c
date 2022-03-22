#include <stdio.h>

int main(void)
{
	int x,y;
	printf("enter days :");
	scanf("%d",&x);
	printf("%d days are %d weeks,%d days\n",x,x/7,x%7);

	getchar();
	getchar();
	return 0;
}