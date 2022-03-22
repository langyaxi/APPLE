#include <stdio.h>
#include <string.h>
int main(void)
{
	int x, y;
	char first_name[20], last_name[20];
	
	printf("enter your first name:");
	scanf("%s",first_name);
	printf("enter your last name:");
	scanf("%s",last_name);
	printf("%s %s\n",first_name,last_name);
	x = strlen(first_name);
	y = strlen(last_name);
	printf("%*d %*d\n",x,x,y,y);// question one

	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d", x, x, y, y);// question two



	getchar();
	getchar();
	return 0;
}

