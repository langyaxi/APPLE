#include <stdio.h>
#define INCH_PER_CM 0.39370
#define INCH_PER_FEET 12
int main(void)
{
	float height_cm, height_in, inch;
	int feet;

	printf("enter a height in centimeter :");
	scanf("%f", &height_cm);

	while (height_cm > 0)
	{
		height_in = height_cm*INCH_PER_CM; //convert height to inch
		feet = (height_in / INCH_PER_FEET);//convert height to feet
		inch = height_in - feet*INCH_PER_FEET;
		printf("%.1f cm = %d feet, %.1f inches\n", height_cm, feet, inch);
		printf("enter a height in centimeter :");
		scanf("%f", &height_cm);
	}


	getchar();
	getchar();
	return 0;
}