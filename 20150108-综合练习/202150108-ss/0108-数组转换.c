#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define sum 8

int main()
{
	int i,j;
	int val1[sum]={0};//={1,2,3,4,5,6,7,8};
	//产生随机数
	srand(time(NULL));
	for(i = 0; i != sum; i ++)
	{
		val1[i] = rand() % 100 ; 
	}

	for(i = 0; i != sum; i ++)
	{
		printf("%d ", val1[i]);
	}
	printf("\n");




	////////////////////
	printf("右移一位:\n");
	j=val1[sum-1];
	for(i=sum-2;i>=0;i--)
	{
		val1[i+1]=val1[i];
	}
	val1[0]=j;
	
	for(i=0;i<sum;i++)
	{
	    printf(" %d",val1[i]);
	}
	 printf("\n");
	 //////////////////////
	printf("左移一位：\n");
	j=val1[0];
	for(i=0;i<sum-1;i++)
	{
		val1[i]=val1[i+1];
	}
	val1[sum-1]=j;
	for(i=0;i<sum;i++)
	{
		 printf(" %d",val1[i]);
	}
	system("pause");
	return 0;
}