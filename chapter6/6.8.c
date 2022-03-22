#include <stdio.h>
#include <string.h>
int main(void)
{
	float num1, num2;
	printf("Enter two number:");
	while (scanf("%f%f", &num1, &num2) == 2)
	{
		printf("%f", (num1 - num2) / num1*num2);
	}
	
	getchar();
	getchar();
	return 0;
}
