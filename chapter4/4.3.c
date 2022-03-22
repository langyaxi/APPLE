#include <stdio.h>
int main(void)
{
	float x;
	
	printf("enter a number\n");
	scanf("%f",&x);
	printf("%3.1f\n", x);//a
	printf("%1.1e\n", x);//a
	printf("%.3f\n", x);//b
	printf("%.3e\n", x);//b

	getchar();
	getchar();
	return 0;
}

