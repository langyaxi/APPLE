#include <stdio.h>

int main(void)
{
	int num_l, num_u,i;
	
	printf("This program prints a table of integers with their square and cubes.\n");
	printf("Enter lower and upper integer limits(in that order):\n");
	scanf("%d%d",&num_l,&num_u);
	printf(" Integer        | Square         | Cube           \n");
	printf("----------------|----------------|----------------\n");

	for (i = 0; i + num_l <= num_u;i++)
	{
		printf("%-16d|%-16d|%-16d\n", i + num_l,(i + num_l)*(i + num_l),
			(i + num_l)*(i + num_l)*(i + num_l));
	}
		
	getchar();
	getchar();
	return 0;
}
