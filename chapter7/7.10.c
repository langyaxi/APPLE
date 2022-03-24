#include <stdio.h>
#define SINGLE 17850.0
#define HOUSEHOLD 23900.0
#define MARRIED_IN_COMMON 29750.0
#define MARRIED_DIVORCE 14875.0
#define BASIC_RATE 0.15
#define OVER_RATE 0.28
float show_menu(void);
float calculate_tax(float, float);
void remove_space(void);

int main(void)
{

	float standard, income;
	int ch;
	standard = show_menu();
	while (standard)
	{
		printf("you were chosen $%.2f standard.\n", standard);
		printf("Now enter your income:\n");
		ch = scanf("%f", &income);
		remove_space(); //移除输入后的换行符方便下次循环
		if (ch == 1)
		{
			calculate_tax(income, standard);
			printf("$%.2f should take $%.2f tax.\n", income, calculate_tax(income, standard));

			standard = show_menu();
		}
		else
		{
			printf("please enter the number of your income\n");
		}
	}

	return 0;
}
float show_menu(void)
{
	char choice;
	float standard = 1.0;
	printf("**********************************************************\n");
	printf("      a)single                b)household                 \n");
	printf("      c)married in common     d)married divorce           \n");
	printf("**********************************************************\n");

	printf("Enter a-d to choice which is your(q to quit)\n");

	while (standard == 1.0)
	{
		standard = 0.0;
		// remove_space();
		choice = getchar();

		switch (choice)
		{
		case 'a':
			standard = SINGLE;
			break;
		case 'b':
			standard = HOUSEHOLD;
			break;
		case 'c':
			standard = MARRIED_IN_COMMON;
			break;
		case 'd':
			standard = MARRIED_DIVORCE;
			break;
		case 'q':
			standard = 0.0;
			printf("Bye!");
			break;
		default:
			printf("Enter a-d to choice which is your(q to quit)\n");
			standard = 1.0;
			break;
		}
		remove_space(); //跳过输入的一行除了首字母外的其他字符
	}
	return standard;
}

float calculate_tax(float income, float standard)
{

	if (income >= standard)
		return standard * BASIC_RATE + (income - standard) * OVER_RATE;
	else
		return 0.0;
}
void remove_space(void)
{
	while (getchar() != '\n') //消除上输入之后和这输入开始之间的空格 换行符
		continue;
}
