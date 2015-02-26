#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void func(int *sum,double *aver,int *max,int *min)
{
	int cnt,val;
	cnt=0;
	*sum=0;
	*aver=0;
	*max=0x80000000;
	*min=0x7fffffff;
	while(scanf("%d",&val)==1)
	{
		cnt++;
	  *sum=*sum+val;
	  *aver=*sum/3;
	  if(*max<val)
	  {
		  *max=val;
	  }
	  if(*min>val)
		  *min=val;
 
	}
}

int main()
{
	int sum_m,max_m,min_m;
	double aver_m;
	sum_m=0;
	max_m=-0x8000000;
	min_m=0x7fffffff;                                                                      ;
	
	aver_m=0;
	func(&sum_m,&aver_m,&max_m,&min_m);

	printf("%d %f %d %d",sum_m,aver_m,max_m,min_m);
	system("pause");
	return 0;

}