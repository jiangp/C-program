#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void show_hello()
{
	printf("hello world\n");
}
void show_smile()
{
	putchar(1);
	putchar('\n');
}
void show_bell()
{
	putchar(7);
}
int main()
{
	void (*pfun)();
	int ch;
	while((ch=getchar())!=EOF)
	{
		if(isalpha(ch))//
		{
			pfun = &show_hello;
		}else if(isdigit(ch))//
		{
			pfun = &show_smile ;	
		}else 
		{
			pfun = &show_bell ;	
		}
		(*pfun)();
	}
//	pfun=&show_bell;
//	(*pfun)();
	system("pause");
	return 0;
}