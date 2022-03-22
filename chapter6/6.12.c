#include <stdio.h>

int main(void)
{
	long limit,i;
	float series1=0, series2=0;
	float sign = 1.0;
	printf("enter  a number of terms to sum:");
	scanf("%d", &limit);

	for (i = 1; i <= limit;i++)
	{
		series1 += 1.0 / i;
		series2 += 1.0 / i*sign;
		sign = -sign;
	}
	printf("The %ldth partial sum for series 1 is: %.5f\n", limit, series1);
	printf("The %ldth partial sum for series 2 is: %.5f\n", limit, series2);


	getchar();
	getchar();
	return 0;
}
