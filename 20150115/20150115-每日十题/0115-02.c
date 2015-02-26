//求二维数组的最大最小值
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define hang 10
#define LEN 10
/*int max1(int *arr)
{
	int max1;
	int i,j;
	max1=arr[0];
	for(i=0;i<LEN;i++)
	{
		
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	return max1;
}
void max(int **arr)
{
	int i,j;
	int max2=0;
	for(i=0;i<hang;i++)
	{
		if(max1(*arr+i)>max2)
		{
		//	max2=max1(&arr[i]);
		}
	}
	printf("最大值：%d",max2);

}
void fun(int *point)
{
	int i,j;
	for(i=0;i<hang;i++)
	{
		for(j=0;j<LEN;j++)
		{
			arr[i][j]=rand()%20;
		}
	}
}*//*
int main()
{
	int arr[hang][LEN];
	int i,j,max,min;
	max=0x80000000;
	min=0x7fffffff;
	for(i=0;i<hang;i++)
	{
		for(j=0;j<LEN;j++)
		{
			arr[i][j]=rand()%100;
		}
	}
	for(i=0;i<hang;i++)
	{
		for(j=0;j<LEN;j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<hang;i++)
	{
		for(j=0;j<LEN;j++)
		{
			if(arr[i][j]>max)
				max=arr[i][j];
			if(arr[i][j]<min)
				min=arr[i][j];
		}
	}
	printf("max: %d\n",max);
	printf("min: %d\n",min);
//	max(arr[hang]);
	system("pause");
	return 0;
}*/