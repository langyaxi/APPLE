#include <stdio.h>
#include <stdbool.h>
int check(void); 
void show_prime_number(int);

int main()
{
	int  ch, input;
	printf("Enter a positive integer:(q to quit)");
	if (scanf("%d", &input) !='q')
	{
		ch = check();
		if (ch)
		show_prime_number(ch);	
		else
		printf("Enter a positive integer:1111111111");
	}
	else
		printf("Bye\n");

	getchar();
	getchar();
	return 0;
}
int check()
{
	int input;
	if (scanf("%d", &input) != 1 || input <= 0)
	{
		printf("This is not a positive integer:\n");
		return 0;
	}
	else
		return input;
}

void show_prime_number(int input)
{
	int i, count;
	int j = 0;

	for (i = input; i > 0;i--)
	{
		bool flag =true;
		for (count = 2; count*count <= i; count++)
		{
			if (i%count == 0 || count*count==i)
			{
				flag = false;
				break;
			}

		}
		
		if (flag)
		{
			j++;
			printf("%3d", i);
			j > 6 ? j=0,printf("\n") : printf(" ");			
		}
	}
	
	return;
}