
#include <stdio.h>

int main(void)
{
	char firstname[20], lastname[20];
	printf("input your firstname:\n");
	scanf("%s", firstname);
	printf("input your lastname:\n");
	scanf("%s", lastname);
	printf("your name is %s,%s\n", firstname, lastname);

	//getchar();//暂停读取enter键
	//getchar();
	return 0;
}

