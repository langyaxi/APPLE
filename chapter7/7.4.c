#include <stdio.h>

int main(void)
{
	char input;
	int count=0;
	printf("Enter input (%c to exit):\n",'#');
	while ((input = getchar()), input != '#')
	{
		if (input == '.')
		{
			printf("!");
			count++;
		}
		else if (input == '!')
		{
			printf("!!");
			count++;
		}
		else
			printf("%c",input);
	}
	printf("%d times replace\n", count);

	getchar();
	getchar();
	return 0;
}