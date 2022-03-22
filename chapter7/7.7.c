#include <stdio.h>

#define BASIC_RATE 10.0
#define OVERTIME_TIME 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.2
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

float calculate_gross_pay(float hours);
float calculate_taxes(float gross_pay);


int main(void)
{
	float hours, gross_pay,taxes,net;
	printf("Enter number of hours worked in a week:\n");
	scanf("%f",&hours);
	gross_pay = calculate_gross_pay(hours);	
	taxes = calculate_taxes(gross_pay);
	net = gross_pay - taxes;
	printf("For %.1f hours of work you make $%.2f and pay $%.2f in taxes.actually you make $%.2f",
		hours,gross_pay,taxes,net);

	getchar();
	getchar();
	return 0;
}
float calculate_gross_pay(float hours)
{
	if (hours > OVERTIME_TIME)
		return (hours - 40)*OVERTIME_MULTIPLIER*BASIC_RATE + BASIC_RATE*OVERTIME_TIME;
	else
		return hours*BASIC_RATE;	
}
float calculate_taxes(float gross_pay)
{
	if (gross_pay>TAX_BRACKET_2)	
		return (gross_pay - TAX_BRACKET_2)*TAX_RATE_3 + (TAX_BRACKET_2 - TAX_BRACKET_1)*TAX_RATE_2 + TAX_BRACKET_1*TAX_RATE_1;
	else if (gross_pay > TAX_RATE_1)
		return (gross_pay - TAX_BRACKET_1)*TAX_RATE_2 + TAX_BRACKET_1*TAX_RATE_1;
	else
		gross_pay*TAX_RATE_1;	
}
