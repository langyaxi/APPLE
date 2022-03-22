#include <stdio.h>
int main(void) /* 计算前20个整数的和 */
{
	int days;
	printf("enter the days:");
	scanf("%d", &days);
	int count, sum;
	count = 0; 
	sum = 0; 
	while (count++ <days) 
		sum = sum + count;
	printf("sum = %d\n", sum); 

	getchar();
	getchar();
	return 0; 
}