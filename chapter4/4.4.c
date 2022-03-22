#include <stdio.h>
int main(void)
{
	char name[20];
	float x;
	
	printf("enter your name and height(centimeter)");
	scanf("%s %f",name,&x);
	printf("%s,you are %.2f meter tall\n",name,x/100);

	getchar();
	getchar();
	return 0;
}

