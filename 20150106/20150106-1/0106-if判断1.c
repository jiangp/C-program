#include<stdio.h>
#include<stdlib.h>
void main()
{
	//////////////////////////////////
	/*//输入输出
	char c;
	for(;(c=getchar())!='\n';)
		putchar(c);*/
	/////////////////////////////////////
	//if条件选择
	int sex,wei;
	scanf("%d%d",&sex,&wei);
	if(sex>=0)
	{
		if(wei>180)
		{
			printf("男，超重");
		}
		else
		{
			printf("男，不重");
		}
	}
	else
	{
		if(wei>180)
		{
			printf("女，超重");

		}
		else
		{
			printf("女，不重");
		}
	}
	system("pause");

}