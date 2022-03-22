#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> 
int main(void)
{
	char input;
	int ei_count=0;
	bool ei_flag = false;
	printf("Enter input (%c to exit):\n",'#');
	while ((input = getchar()) != '#')
	{
		input = tolower(input);
		if (input == 'e')
			ei_flag = true;
		else if (input == 'i')
		{
			ei_count++;
			ei_flag = false;
		}
		else
			ei_flag = false;			
	}
			
	printf("\n%d times replace\n", ei_count);

	getchar();
	getchar();
	return 0;
}