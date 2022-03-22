#include <stdio.h>

int main(void)
{
	char ch;
	int count;
	count = 0;
	while ((ch=getchar(),ch != '#'))
	{
		switch (ch)
		{
		case '\n': printf("\\n-%d", ch, ch);
			break;
		case '\t': printf("\\t-%d", ch, ch);
			break;
		case '\b': printf("\\b-%d", ch, ch);
			break;
		default:printf("%c-%d", ch,ch);

		}
		count++;	
		count % 8 == 0 ? printf("\n") :printf("  ");
		
	}
	getchar();
	getchar();
	return 0;
}