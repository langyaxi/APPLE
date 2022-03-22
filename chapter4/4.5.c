#include <stdio.h>
int main(void)
{
	
	float x,y,z;
	
	printf("enter download speed(Mb/s) and file size(MB)\n");
	scanf("%f %f",&x,&y);
	z = y * 8 / x;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",x,y);
	printf("downloads in %.2f seconds\n",z);

	getchar();
	getchar();
	return 0;
}

