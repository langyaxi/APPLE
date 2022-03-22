#include <stdio.h>
#define ALP 26
int main(void)
{
	int i;
	char ch, alphabet[ALP];
	for (i = 0,ch='a'; i < ALP; i++,ch++)
		printf("%c",ch);

	getchar();
	getchar();
	return 0;
}