#include<stdio.h>
#include<stdlib.h>
int main()
{
	//////////////////////////////////////////////
	//统计数据输出
	int val1,val2,val3;
	int i,max=0;
	scanf("%d%d%d",&val1,&val2,&val3);
	max=(val1>val2?val1:val2);
	max=(max>val3?max:val3);
	for(i=0;i<max;i++)
	{
		if(max-i>val1)
		{
			printf("          ");
		}
		else
			printf("*****     ");
		if(max-i>val2)
			printf("          ");
		else
			printf("*****     ");
	    if(max-i>val3)
			 printf("          ");
		else
			printf("*****     ");

		
		
		printf("\n");
	}
	system("pause");
	return 0;
}	
	//////////////////////////////////////////////