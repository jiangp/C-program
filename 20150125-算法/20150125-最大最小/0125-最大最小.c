#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int main()
{

	int index;
	int arr[SIZE]={1,2,3,4,5,6,7,8,9,0,-1};
	int max=0x80000000;
	int min=0x7fffffff;
	for(index=0;index<SIZE-1;index=index+2)//同时取两个数
	{

		if(arr[index]>arr[index+1])
		{
			if(arr[index]>max)
			{
				max=arr[index];
			}
			if(arr[index+1]<min)
			{
				min=arr[index+1];
			}
		}else
		{
			if(arr[index+1]>max)
			{
				max=arr[index+1];
			}
			if(arr[index]<min)
			{
				min=arr[index];
			}
		}
	}
	if(SIZE%2==1)
	{
		if(arr[SIZE-1]>max)
		{
			max=arr[SIZE-1];
		}else if(arr[SIZE-1]<min)
		{
			min=arr[SIZE-1];
		}
	}
	printf("max :%d  min :%d",max,min);
	system("pause");
	return 0;
}