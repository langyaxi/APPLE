#include <stdio.h>

int main(void)
{
	char line[255];
	int i=0;
	while (scanf("%c", &line[i]), line[i] != '\n')
		i++;
	for (; i >= 0; i--)
		printf("%c", line[i]);

	getchar();
	getchar();
	return 0;
}