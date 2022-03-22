#include <stdio.h>
#include <float.h>
int main(void)
{
	double x=1.0/3.0;
	float y=1.0/3.0;
	
	printf("double : \n");
	printf("%-18.6f \n%-18.12f \n%-18.16f\n", x, x, x);

	printf("float : \n");
	printf("%-18.6f \n%-18.12f \n%-18.16f\n", y,y,y);
	
	printf("FLT_DIG:%d\n",FLT_DIG);
	printf("DBL_DIG:%d",DBL_DIG);


	getchar();
	getchar();
	return 0;
}