#include <stdio.h>

int main(void)
{
	char input;
	int count=0;
	printf("Enter input (%c to exit):\n",'#');
	while ((input = getchar()), input != '#')
	{
		switch (input)
		{
		case '.':
			printf("!");
			count++;
			break;
		case '!':
			printf("!!");
			count++;
			break;
		default: printf("%c", input);
		}
	}
			
	printf("\n%d times replace\n", count);

	getchar();
	getchar();
	return 0;
}