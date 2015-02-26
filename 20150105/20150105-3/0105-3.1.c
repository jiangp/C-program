#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	/*if(a<b)
	{
		a=b+a;
		b=a-b;
		a=a-b;
	}
	if(a<c)
	{
		a=a+c;
		c=a-c;
		a=a-c;
	}
	if(b<c){
		c=b+c;
		b=c-b;
		c=c-b;
	}
		
	printf("%d>%d>%d\n",a,b,c);*/
	a=a+b-(b=a);
	printf("%d%d",a,b);
	system("pause");
}
