#include <stdio.h>
#include <string.h>

int cal(int n,int m);

int main(void)
{
	int num_l, num_u;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d",&num_l,&num_u);
	while (num_l<num_u)
	{
		cal(num_l,num_u);
		printf("The sum of the square from %d to %d is %d\n"
			,num_l*num_l,num_u*num_u, cal(num_l, num_u));
		printf("Enter next lower and upper integer limits:");
		scanf("%d %d", &num_l, &num_u);
	}
	getchar();
	getchar();
	return 0;
}
int cal(int n, int m)
{
	int x,i,sum;	
	for (i = 0, sum = 0; n + i <= m; i++)
		sum += (n + i)*(n + i);
	return sum;
}