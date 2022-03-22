#include <stdio.h>

int main(void)
{
	int x,y;
	printf("enter a number :");
	scanf("%d",&x);
	y = x + 10;
	while (x<y)
	{
		printf("%d\n", x);
		x++;
	}
	printf("%d\n", x);

	getchar();
	getchar();
	return 0;
}