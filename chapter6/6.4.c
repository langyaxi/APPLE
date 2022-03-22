#include <stdio.h>

int main(void)
{
	int i,j;
	char ch;
	ch = 'A';
	for (i = 0; i < 6;i++)
	{
		for (j = 0 ; j <= i;j++,ch++)
			printf("%c", ch);
		printf("\n");
	}
	
	getchar();
	getchar();
	return 0;
}