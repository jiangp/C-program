#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
void func5(int *arr,int bg,int end);
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
	//func2(arr ,len);
	printf("\n");
	system("pause");
	return 0;
}
void func2(int *arr ,int len)//输出函数
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
void func3(int *arr,int len)//选择排序函数
{
	int tem,max1=1,max2;
	int index;
	max2=0;
	for(index=0;index<len;index++)
	{		
			if(arr[index]>arr[max2])
			{
				max2=index;
			}
			if(max2>=max1)
			{
				tem=max1;
				max1=max2;
				max2=tem;
			}		
	}
	printf("%d %d",arr[max1],arr[max2]);			
}


void func4(int *arr,int len)//插入法
{
	int i,index;
	for(i=1;i!=len;i++)
	{
		for(index=i-1;index>=0;index--)
		{
			if(arr[index]<=arr[i])
			    break;
		}
		func5(arr,index+1,i);
	}

}
  void func5(int*arr, int bg, int end)
{
	int index ;
	int tmp ;
	tmp = arr[end] ;
	for(index = end - 1; index >= bg; index --)
	{
		arr[index + 1] = arr[index] ;
	}

	arr[bg] = tmp ;

}
