#include <stdio.h>

int main(void)
{
	const int DEPOSIT = 1000000;
	const int SPEND = 100000;
	const float INTEREST = 0.08;
	int years, money,spend;

	years = 0;
		do 
		{		
			years++;
			money = DEPOSIT + DEPOSIT*INTEREST*years;
			spend = years*SPEND;
		} while (money>spend );
		printf("the money will runs out in %d years ",years);

	getchar();
	getchar();
	return 0;
}