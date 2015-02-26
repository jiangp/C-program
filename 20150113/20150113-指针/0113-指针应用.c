#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	void arr(int *p1,int *p2);
	int n1,n2,n3;
	int *p3,*p1,*p2;
	printf("input three integer n1,n2,n3:");
	scanf("%d %d %d",&n1,&n2,&n3);
	p1=&n1;
	p2=&n2;
	p3=&n3;
	if(n1>n2)arr(p1,p2);
	if(n1>n3)arr(p1,p3);
	if(n2>n3)arr(p2,p3);
	printf("Now,the order is%d%d%d",n1,n2,n3);
	system("pause");
    return 0;
	
}
void arr(int *p1,int *p2)
{
	int a;
	a=*p1;*p1=*p2;*p2=a;
}