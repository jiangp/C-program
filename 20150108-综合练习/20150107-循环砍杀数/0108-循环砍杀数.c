#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 100
#define STEP  5
//void func1()
//{
//	func1();
//}
void ysf1()
{
	int LEFT[MAX];
	int index,LEFT1=MAX;
	int start_index=0;
	int move_index;
	for(index=0;index!=MAX;index++)
	{
		LEFT[index]=index+1;
	}
	while(LEFT1!=1)
	{
		index=1;
		while(index!=STEP)
		  {
			
			if((start_index+1)==LEFT1)
		     {
			   start_index=0;
		     }
			else
			{
				start_index++;
			 }
			index++;
	     }
		printf("%d\n",LEFT[start_index]);	
		//move_index+=start_index;
	    for(move_index=start_index+1;move_index!=LEFT1;move_index++)
	      {
		     LEFT[move_index-1]=LEFT[move_index];
	      }
		if(start_index==LEFT1-1)
		{
			start_index = 0 ;
		}
	   
	   // for(index=0;index<LEFT1;index++)

		LEFT1--;
	}
	printf("%d\n",LEFT[0]);
	
}
void ysf2()
{
	int arr[MAX];
	int index, move_index  ;
	int left = MAX ;
	int start_index = 0 ;
	for(index = 0; index != MAX; index ++)
	{
		arr[index] = index + 1 ;
	};

	index = 0 ;
	start_index = 0 ;
	while(left != 1)
	{
		if(arr[start_index] != 0)
		{
			index ++ ;
			
			if(index == STEP)
			{
				//printf("2: out: %d \n", arr[start_index]);
				arr[start_index] = 0 ;
				index = 0 ;
				left -- ;
			}
			start_index = (start_index + 1) % MAX ;
		}else 
		{
			start_index = (start_index + 1) % MAX ;
		}
	}
	for(index = 0 ; index != MAX; index ++)
	{
		if(arr[index] != 0)
		{
			printf("winner: %d \n", arr[index]);
			break ;
		}
	}
}
int main()
      {
		  ysf1();
	/*
	clock_t bg1, bg2, end1, end2 ;
	bg1 = clock();
	ysf1();
	end1 = clock();
	printf("1: %.16fS\n", (double)(end1 - bg1)/CLOCKS_PER_SEC );

	bg2 = clock();
	ysf2();
	end2 = clock();
	printf("2: %.16fS\n", (double)(end2 - bg2)/CLOCKS_PER_SEC );
	system("pause");*/
		  system("pause");
          return 0;
      }