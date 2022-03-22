#include <stdio.h>

int main(void)
{
	char ch;
	int space, rank,chars;
	space = rank = chars = 0;
	while ((ch=getchar(),ch != '#'))
	{
		
		if (ch == ' ')
			space++;
		else if (ch == '\n')
			rank++;
		else
			chars++;
	}
	printf("There are %d space ,%d \\n and %d other characters",space,rank,chars);

	getchar();
	getchar();
	return 0;
}