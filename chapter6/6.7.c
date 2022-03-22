#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[30];
	int num,i;
	printf("Enter a word:");
	scanf("%s",word);
	num=strlen(word);
	for (i = 0; i <num;i++)
	{
		printf("%c",word[num-1-i]);
	}

	getchar();
	getchar();
	return 0;
}
