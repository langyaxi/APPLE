#include <stdio.h>

double cube(double n);  //prototype declaration for cube

int main(void) 
{
	double input;
	printf("enter a number to cube:");
	scanf("%lf", &input);
	printf("%.3f cubed is %.3f\n",input,cube(input));

	getchar();
	getchar();
	return 0; 
}
double cube(double n)
{
	return n*n*n;
}