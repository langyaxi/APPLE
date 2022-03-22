#include <stdio.h>
#include <string.h>

float cal(float n,float m);

int main(void)
{
	float num1, num2;

	printf("Enter two number:");
	while (scanf("%f %f", &num1, &num2) == 2)
	{
		cal(num1, num2);
		printf("%.2f", cal(num1, num2));
	}

	getchar();
	getchar();
	return 0;
}
float cal(float n, float m)
{
	float x;	
	x= (n - m) / n*m;
	return x;
}