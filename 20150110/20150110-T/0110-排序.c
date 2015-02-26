#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
void func3(int *arr,int len);
void func2(int *arr ,int len);
int main()
{
	int arr[SIZE];
	int i,len=SIZE;
	for(i = 0; i != len; i ++)
	{
		arr[i] = rand() % 100 ;
	}
	func2(arr ,len);
	printf("\n");
	func3(arr,len);
	func2(arr ,len);
	printf("\n");
	system("pause");
	return 0;
}
void func1(int *arr,int len)//”≈ªØ√∞≈›∑®≈≈–Ú
{
	int up=-1;
	int down=len;
	int i,j,tem;
	for(i=0;up<=down;i++)
	{
		for(j=up+1;j+1<down;j++)
		{
			if(arr[j]>arr[j+1])
			{
			tem=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tem;
			}
		}
		down--;
		for(j=down-1;j-1>up;j--)
		{
			if(arr[j]<arr[j-1])
			{
				tem=arr[j];
			    arr[j]=arr[j-1];
			    arr[j-1]=tem;
			} 
		}
		up++;
	}
}
void func2(int *arr ,int len)//
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
void func3(int *arr,int len)//—°‘Ò≈≈–Ú
{
	int tem,max;
	int index,j;
	
	for(index=0;index<len;index++)
	{
		max=0;
		for(j=0;j<len-index;j++)
		{
			if(arr[j]>arr[max])
			{
				max=j;

			}
		}
		tem=arr[len-index-1];
		arr[len-index-1]=arr[max];
		arr[max]=tem;
		
	}
}