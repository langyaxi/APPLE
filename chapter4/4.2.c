#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[20];
	int name_length;

	printf("enter your first and last name:\n");
	scanf("%s", name);
	name_length = strlen(name);
	printf("\"%s\"\n", name);// a
	printf("\"%20s\"\n",name);//b
	printf("\"%-20s\"\n",name);//c
	printf("\"%*s\"\n", name_length+3,name);//d  

	getchar();
	getchar();
	return 0;
}

