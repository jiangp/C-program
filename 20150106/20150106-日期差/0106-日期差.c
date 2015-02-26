#include<stdio.h>
#include<stdlib.h>
int day(int year,int mount,int day)
{
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum1=0;
	if((year%4==0)&&(year%100!=0)||(year%400==0))
		date[1]=29;
	for(i=0;i<mount;i++)
	{
		sum1+=date[i];	     
	}
	sum1=sum1+day;
	return sum1;
}
int main()
{
	int year1,year2;
	int mount1,mount2;
	int day1,day2;
	int i,sum2=0,sum=0;
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("输入第一个日期");
	scanf("%d%d%d",&year1,&mount1,&day1);
	printf("输入第二个日期");
	scanf("%d%d%d",&year2,&mount2,&day2);
	
	for(i=year1;i<year2;i++)
	{
	   if((year1%4==0)&&(year1%100!=0)||(year1%400==0))
	       {
			   sum2=sum2+366;
	       }
	   else
		   {
			   sum2=sum2+365;
	       }
	}
	sum=sum2-(day(year1,mount1,day1))+(day(year2,mount2,day2));
	printf("%d",sum);
	system("pause");


	return 0;
}