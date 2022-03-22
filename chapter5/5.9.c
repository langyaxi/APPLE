#include <stdio.h>
void Temperatures(double fahr);

int main(void) 
{
	double fahr;

	printf("This program converts Fahrenheit to Celsius and kelvin.\n ");
	printf("Enter a temperature in degrees Fahrenheit(q to quit):\n");
	scanf("%lf",&fahr);

	while (scanf("%1f",&fahr)== 1)
	{
		Temperatures(fahr);
		printf("Enter a temperature in degrees Fahrenheit(q to quit):\n");
	}

	getchar();
	getchar();
	return 0; 
}
void Temperatures(double fahr)
{
	const double FAHR_TO_CEL_SCALE = 5.0 / 9.0;
	const double FAHR_TO_CEL_OFFSET = -32;
	const double CEL_TO_KEL_OFFSET = 273.16;
	double celsius = (fahr + FAHR_TO_CEL_OFFSET)*
		FAHR_TO_CEL_SCALE;
	double kelvin = celsius + CEL_TO_KEL_OFFSET;

	printf("%.2f degrees Fahrenheit is %.2f degrees celsius or %.2f degrees kelvin.\n",
		fahr, celsius, kelvin);
}
