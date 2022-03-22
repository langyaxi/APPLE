/*

#include <stdio.h>

#define OVERTIME_TIME 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.2
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

float calculate_gross_pay(float hours ,float BASIC_RATE);
float calculate_taxes(float gross_pay);


int main(void)
{
	float  BASIC_RATE, hours, gross_pay, taxes, net;
	int basic_rate;
	part1:;
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                            2)$9.33/hr                \n");
	printf("3) $10.00/hr                           4)$11.20/hr               \n");
	printf("5) quit                                                          \n");
	printf("*****************************************************************\n\n");
	scanf("%d",&basic_rate);
	switch (basic_rate)
	{
	case 1: BASIC_RATE = 8.75;
		break;
	case 2: BASIC_RATE = 9.33;
		break;
	case 3: BASIC_RATE = 10.00;
		break;
	case 4: BASIC_RATE = 11.20;
		break;
	case 5:break;
	default:
		printf("Enter the right option");
		goto part1;
	}
		while(basic_rate!=5)
	{
		printf("Enter number of hours worked in a week:\n");
		scanf("%f", &hours);
		gross_pay = calculate_gross_pay(hours, BASIC_RATE);
		taxes = calculate_taxes(gross_pay);
		net = gross_pay - taxes;
		printf("For %.1f hours of work you make $%.2f and pay $%.2f in taxes.actually you make $%.2f\n",
			hours, gross_pay, taxes, net);
	}
	getchar();
	getchar();
	return 0;
}
float calculate_gross_pay(float hours,float BASIC_RATE)
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
*/






// C Primer Plus
// Chapter 7 Exercise 8:

// Modify assumption a. in exercise 7 so that the program presents a menu of
// pay rates from which to choose. Use a switch to select the pay rate. The
// beginning of a run should look something like this:

// *****************************************************************
// Enter the number corresponding to the desired pay rate or action:
// 1) $8.75/hr 							2) $9.33/hr
// 3) $10.00/hr 						4) $11.20/hr
// 5) quit 
// *****************************************************************

// If choices 1 through 4 are selected, the program should request the hours
// worked. The program should recycle until 5 is entered. If something other
// than choices 1 through 5 is entered, the program should remind the user what
// the proper choices are and then recycle. Use #defined constants for the
// various earning rates and tax rates.

#include <stdio.h>
#include <stdbool.h>

#define RATE_1 8.75
#define RATE_2 9.33
#define RATE_3 10.00
#define RATE_4 11.20

#define OVERTIME_HOURS 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.20
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

void flush_input_buffer(void);
float calculate_gross_pay(float hours, float rate);
float calulate_taxes(float gross_pay);

int main(void)
{
	bool exit_flag = false;
	int rate_option;
	float rate, hours, gross_pay, taxes;

	while (1) // main program loop
	{

		// print usage instructions
		printf("*****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $%.2f/hr 				2) $%.2f/hr\n", RATE_1, RATE_2);
		printf("3) $%.2f/hr 				4) $%.2f/hr\n", RATE_3, RATE_4);
		printf("5) quit \n");
		printf("*****************************************************************\n");

		scanf("%d", &rate_option);
		switch (rate_option)
		{
		case (1) :
			rate = RATE_1;
			break;
		case (2) :
			rate = RATE_2;
			break;
		case (3) :
			rate = RATE_3;
			break;
		case (4) :
			rate = RATE_4;
			break;
		case (5) :
			exit_flag = true;
			break;
		default: // invalid input
			flush_input_buffer();
			printf("Please enter an integer between 1 and 5.\n\n");
			continue; // repeat main program loop
		}

		if (exit_flag)
			break; // exit program

		printf("Enter number of hours worked in a week: ");
		while (scanf("%f", &hours) != 1 || hours <= 0)
		{
			flush_input_buffer();
			printf("Please enter a positive number. \n");
			printf("Enter number of hours worked in a week: ");
		}

		gross_pay = calculate_gross_pay(hours, rate);
		taxes = calulate_taxes(gross_pay);

		printf("For %.1f hours of work at $%.2f/hr, you make $%.2f and pay"
			" $%.2f in taxes.\n", hours, rate, gross_pay, taxes);
		printf("\n");

	}

	printf("Bye.\n");

	return 0;
}

void flush_input_buffer(void)
{
	while (getchar() != '\n')
		;
}

float calculate_gross_pay(float hours, float rate)
{
	if (hours > OVERTIME_HOURS)
		return OVERTIME_HOURS * rate + (hours - OVERTIME_HOURS) * rate * OVERTIME_MULTIPLIER;
	else
		return hours * rate;
}

float calulate_taxes(float gross_pay)
{
	if (gross_pay > TAX_BRACKET_2)
		return TAX_RATE_3 * (gross_pay - TAX_BRACKET_2) + TAX_RATE_2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
	else if (gross_pay > TAX_BRACKET_1)
		return TAX_RATE_2 * (gross_pay - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
	else
		return TAX_RATE_1 * gross_pay;
}
