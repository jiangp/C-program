#include<stdio.h>
#include<stdlib.h>
void main()
{
	//////////////////////////////////
	/*//�������
	char c;
	for(;(c=getchar())!='\n';)
		putchar(c);*/
	/////////////////////////////////////
	//if����ѡ��
	int sex,wei;
	scanf("%d%d",&sex,&wei);
	if(sex>=0)
	{
		if(wei>180)
		{
			printf("�У�����");
		}
		else
		{
			printf("�У�����");
		}
	}
	else
	{
		if(wei>180)
		{
			printf("Ů������");

		}
		else
		{
			printf("Ů������");
		}
	}
	system("pause");

}