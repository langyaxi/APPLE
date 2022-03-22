#include <stdio.h>

int main(void)
{
	double ch1[8], sum, ch2[8];
	int i, j;
	printf(" enter eight number:");
	for (i = 0; i < 8; i++)
		scanf("%lf", &ch1[i]);
	
	for (j = 0, sum = 0.0; j < 8; j++)
	{
	sum += ch1[j];
	ch2[j] = sum;
	}

for (i = 0; i < 8; i++)
		printf("%-6.2lf", ch1[i]);
printf("\n");
for (i = 0; i < 8; i++)
	printf("%-6.2lf", ch2[i]);

	getchar();
	getchar();
	return 0;
}