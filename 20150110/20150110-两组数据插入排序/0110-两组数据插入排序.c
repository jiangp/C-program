#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
#define SIZE2 5
#define SIZE3 30
void func1(int *arr,int len);
void func2(int *arr,int len);
void func3(int *arr,int len);
void func4(int *arr,int len);
void func5(int *arr,int len);
int main()
{
	int arr1[SIZE],arr2[SIZE2],arr3[SIZE3];
	int len=SIZE,len2=SIZE2,len3=SIZE3;
	int i=0,j=0,k=0,forge=0;
	func1(arr1,len);//输入数组1
	func2(arr1,len);
	func4(arr1,len);//排序数组1
    func2(arr1,len);
	func1(arr2,len2);//输入数组2
	func2(arr2,len2);
	func4(arr2,len2);//排序数组2
	func2(arr2,len2);
//void func3(int *arr1,int *arr2,int len,int len2)	
//{
	//int i=0,j=0,k=0,forge=0;
	while(i<len&&j<len2)//数组插入存入arr3【】
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i];
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			arr3[k++]=arr2[j];
			j++;
		}
		else
		{
			if(arr1[i]!=forge)
			{
				arr3[k++]=arr1[i];
				forge=arr1[i];
			}
			j++;
			i++;
		}
	}
	if(i<SIZE)//剩余部分存入3【】
		for( ;i<SIZE;i++)
			arr3[k++]=arr1[i];
	else
		for( ;j<SIZE2;j++)
			arr3[k++]=arr2[j];
//}
	func2(arr3 ,len3);//
	printf("\n");
	system("pause");
	return 0;
}
void func1(int *arr,int len)//输入函数
{
	int i;
	for(i=0;i<len;i++)
	{
		arr[i] = rand() % 100 ;
	}
	printf("\n");
}
void func2(int *arr ,int len)//输出函数
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void func3(int *arr1,int *arr2,int *arr3,int len,int len2,int len3)	
{
	int i=0,j=0,k=0,forge=0;
	while(i<len&&j<len2)//数组插入存入arr3【】
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i];
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			arr3[k++]=arr2[j];
			j++;
		}
		else
		{
			if(arr1[i]!=forge)
			{
				arr3[k++]=arr1[i];
				forge=arr1[i];
			}
			j++;
			i++;
		}
	}
	if(i<SIZE)//剩余部分存入3【】
		for( ;i<SIZE;i++)
			arr3[k++]=arr1[i];
	else
		for( ;j<SIZE2;j++)
			arr3[k++]=arr2[j];
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
void func5(int*arr, int bg, int end)//右移
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
