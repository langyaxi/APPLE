#include <stdio.h>

int main(void) 
{
	const int IP_ONE;
	int ip_two, remaider ;
	printf("enter a number :");
	scanf("%d", &IP_ONE);
	printf("enter another number:");
	scanf("%d", &ip_two);
	remaider = ip_two % IP_ONE;
	printf("%d %% %d is %d",ip_two,IP_ONE,remaider);


	getchar();
	getchar();
	return 0; 
}