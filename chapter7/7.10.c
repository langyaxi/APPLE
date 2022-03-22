#include <stdio.h>
#define SINGLE 17850.0
#define HOUSEHOLD 23900.0
#define MARRIED_IN_COMMON 29750.0
#define MARRIED_DIVORCE 14875.0
#define BASIC_RATE 0.15
#define OVER_RATE 0.28
void show_menu(void);
float calculate_tax(float,float);

int main(void)
{
	char choice; 
	float income ,ch, standard = 0.0;
	show_menu();
	printf("Enter a-d to choice which is your(q to quit)\n");
	while (scanf("%c", &choice), choice >= 'a' && choice<= 'q')
	{
		switch (choice)
		{
		case 'a': standard = SINGLE;
			break;

		case 'b': standard = HOUSEHOLD;
			break;
		case 'c': standard = MARRIED_IN_COMMON;
			break;
		case 'd': standard = MARRIED_DIVORCE;
			break;
		case 'q': printf("Bye!");
			break;
		default: printf("Enter a-d to choice which is your(q to quit)");
			break;
		}
	}
	if (standard)
	{
		printf("you were chosen $%.2f standard.\n",standard);
		printf("Now enter your income:\n");
		ch = scanf("%f", &income);
		if (ch == 1)
		{
			calculate_tax(income,standard);
			printf("\n$%f should take $%.2f tax.", income, calculate_tax(income,standard));
		}
		else
		{			
			//for (; ch != 1;ch=scanf("%f",&income))
				printf("please enter the number of your income:");	
			//	scanf("%f", &income);
		//	calculate_tax(income,standard);
		//	printf("\n$%f should take $%.2f tax.", income, calculate_tax(income,standard));
		}
	}


	getchar();
	getchar();
	return 0;
}
void show_menu(void)
{
	printf("**********************************************************\n");
	printf("      a)single                b)household                 \n");
	printf("      c)married in common     d)married divorce           \n");
	printf("**********************************************************\n");
}
float calculate_tax(float income,float standard)
{
	
	if (income >= standard)
		return  standard*BASIC_RATE + (income - standard)*OVER_RATE;
	else
		return 0.0;
}