#include <stdio.h>

int main(void)
{
	int input,even_count,odd_count,eve_sum,odd_sum;
	float even_average, odd_average;

	even_count = odd_count = eve_sum = odd_sum = 0;

	printf("Enter integer (0 to stop):\n");
	while ((scanf("%d",&input)==1 && input != 0))
	{
		if (input % 2 == 0)
		{
			even_count++;
			eve_sum += input;
		}
		else
		{
			odd_count++;
			odd_sum += input;

		}
	}
	even_average = eve_sum / (float)even_count;
	odd_average = odd_sum / (float)odd_count;
	printf("Number of even integer :%d\n",even_count);
	printf("Average value of even integers: %.2f\n", even_average);
	printf("Number of odd integers: %d\n", odd_count);
	printf("Average value of odd integers: %.2f\n", odd_average);

	getchar();
	getchar();
	return 0;
}