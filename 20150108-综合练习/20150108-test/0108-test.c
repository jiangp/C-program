#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 100
#define STEP  5
int main()
{
	int all[MAX];
	int index,left=MAX,i=1;
	int start_index=0;
	int move_index;
	for(index=0;index<MAX;index++)//数组付初中1~100
		all[index] = index + 1;
	while(i<MAX)//杀99次
	{
		if(all[start_index]!=0)//判断是否为0
		{ 
			start_index++;	
			index=1;
			while(index!=STEP)//5个一杀
			{
				if((start_index)==left)//=？100
				{
					start_index=0;
				}
				index++;
               
			}
			printf("%d\n", all[i]);	
			all[start_index] = 0;                   
		}
		else
		{
			i--;
			start_index++;
			
		}
		if(start_index==left)
		{
			start_index = 0 ;
		}
				
		i++;
	}
	printf("%d",all[start_index]);
	system("pause");
	return 0;
}