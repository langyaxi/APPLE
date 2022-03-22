#include <stdio.h>
#define LITER_PER_GALLON 3.785
int main(void)
{
	float x,y,z;
	const float KILOMITER_PER_MILE = 1.609;
	printf("enter the travel mails and the gas consume :");
	scanf("%f %f",&x,&y);
	z = x / y;
	printf("travel mails per gallon gas: %.1f\n",z);
	printf("travel kilometer per liter gas: %.1f\n", (x*KILOMITER_PER_MILE) / (y*LITER_PER_GALLON));


	getchar();
	getchar();
	return 0;
}