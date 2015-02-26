//给定日期和天数求下一个日期
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,nian,yue,ri,dates;
	int sum;
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("输入起始日期：\n");
	scanf("%d%d%d%d",&nian,&yue,&ri,&dates);
	if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				date[1]++;
	for(i=0;i<yue;i++)
	{
		sum+=date[i];
	     
	}
	sum=sum+ri;
	if((337+date[1]-sum)>dates)
	{


	}
	else
	{
		dates=dates-sum;
	}

	
	return 0;
}