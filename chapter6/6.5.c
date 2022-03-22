#include <stdio.h>

int main(void)
{	
	int i,j;
	char ch,input;
	printf("enter a capital letter:");
	scanf("%c",&input);
		
	for (i = 0; i <= input - 'A'; i++)  // 
	{
		for (j = 0, ch = 'A'; j < input - (ch + i); j++)  // Prints spaces for each line 
			printf(" ");
		for (j = 0, ch = 'A'; j <= i; j++, ch++)  // Prints letters sequentially
			printf("%c", ch);
		for (j = 0, ch = input - 1; j < i; j++, ch--) //Prints letters in reverse order
			printf("%c",ch);
		printf("\n");
	}
	
	getchar();
	getchar();
	return 0;
}