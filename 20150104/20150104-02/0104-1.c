//十进制数颠倒转换
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int  n;
    int sum=0;
	scanf("%d",&n);
	
	while(n>=1)
	{
		sum=sum*10+n%10;
	    n=n/10;
	}
	
	printf("%d\n",sum);
	system("pause");
    return 0;
}
/*
//十进制数颠倒转换
int main()
{
	int s[10],i,m;
	scanf("%d",&m);
	for(i=0;m!=0;i++)
	{
		s[i]=m%10;
		m/=10;
		printf("%d",s[i]);
	}
	
		
	system("pause");
	return 0;
}*/
