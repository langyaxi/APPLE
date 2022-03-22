#include <stdio.h>

int main(void)
{
	int  i,j=0, ch[8];
	for (i = 1; i < 8; i++)
	{
		ch[0] = 1;
		ch[i] = ch[i - 1] * 2;
	}
	do 
	{
		printf("%d\n",ch[j]);
		j++;	
	} while (j<8);

	getchar();
	return 0;
}