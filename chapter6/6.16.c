#include <stdio.h>

int main(void)
{
	const int MONEY_F = 100;

	float money_da,money_de,interect;
	int years,i;

	years = 0;
	do 
	{		
		years++;
		money_da = MONEY_F+MONEY_F*0.1*years;
		money_de = MONEY_F;
		for (i = 1; i <= years;i++)
		{				
			interect = money_de*0.05;
			money_de += interect;
		}
	} while (money_de<=money_da );
		printf(" %d years ",years);

	getchar();
	getchar();
	return 0;
}