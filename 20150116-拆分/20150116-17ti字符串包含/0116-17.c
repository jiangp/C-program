#include"0116-17.h"
void init(char *str)
{
	printf("please input mian string:\n");
	gets(str);
}
void cmp(char *str,char*str1)
{
	int i,m=0;
	for(i=0;i<strlen(str);i++)
	{
		
		if(str[i]==str1[m])
		{
			m++;
			if(m==strlen(str1))
			{
				printf("str1 is str 's son.\n");
			}else if(i==strlen(str)-1)
			{
				printf("str1 is not str 's son.\n");
			}
			
		}else
		{
			m=0;
		}

	}
}