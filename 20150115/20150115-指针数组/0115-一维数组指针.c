//将数组中的元素逆序存放
#include<stdio.h>
#include<stdlib.h>
void fun(int *x,int n);
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int i,j,k;
	printf("原始数组为:\n");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	fun(arr,10);
	printf("逆序后数组为:\n");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	system("pause");
	return 0;
}
void fun(int *x,int n)
{
	int *p ,*i,*j;
	int index;
	int m=(n-1)/2;
	j=x,i=x+n-1,p=x+m;
	for(;j<=p;j++,i--)
	{
		index=*j;
		*j=*i;
		*i=index;
	}
}