
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ye(int year1,int year2)
{
	int i,sum2=0;
	for(i=year1;i<year2;i++)
	{
		if((i%4==0)&&(i%100!=0)||(i%400==0))
		{
			sum2=sum2+366;
		}
		else
		{
			sum2=sum2+365;
		}
	}
	return sum2;
}



int day(int year,int mount,int day)
{
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum1=0;
	if((year%4==0)&&(year%100!=0)||(year%400==0))
		date[1]=29;
	for(i=0;i<mount-1;i++)
	{
		sum1+=date[i];	     
	}
	sum1=sum1+day;
	return sum1;
}


void main()
{
	int sum2=0;
	int year1=1990,year2;
	int mount1=1,mount2;
	int day1=1,day2;
	int i,w,sum=0;
	char* wen[]={"����","����","����","ɹ��","ɹ��"};
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("#########################################################\n");
	printf("##                  ���㻹��ɹ��                       ##\n");
	printf("##       �й��о��׻��С������������ɹ����            ##\n");
	printf("##     ĳ��20���1990 1 1��ʼ�������������ɹ����      ##\n");
	printf("##      �������Ժ���ĳ�����ǡ����㡿���ǡ�ɹ����       ##\n");
	printf("#########################################################\n");
	while(printf("������/��/�� ������1990 1 1�˳�����"),(scanf("%d%d%d",&year2,&mount2,&day2))!=1)
	{
	
	
	if(year1-year2>20)
	{
		printf("��Ǹ�����컹û������������������\n\n");
	}else
	{
		sum2=ye(year1,year2);
		if(sum2==0)
			sum2=-ye(year2,year1);

		sum=sum2+(day(year2,mount2,day2)-(day(year1,mount1,day1)));
		if(sum>0)
		{
			w=sum%5;
			printf("%d��%d��%d�գ�����: %s........\n\n",year2,mount2,day2,wen[w]);
		}
		else{
			printf("��Ǹ�����컹û��ʼ���㣡������������\n\n");

		}
		
		//for(i=0;i<5;i++)		
		// printf("%s",wen[w]);
	}
	}
	system("pause");

}