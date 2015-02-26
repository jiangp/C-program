#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int main()
{
	int j = 0,i;
	int bg = 0, end = 11, mid;
	int s[SIZE];//={1,2,3,4,5,6,7,8,9,0,10};
	int n=24;
	for(i=0;i<11;i++)
	{
	s[i]=rand()%100;
	}
	//printf("\n");
	//printf("please  input num:\n");
	
	while(bg=end)
	{
        mid = bg+(end-bg)/2;
		for(bg = j; bg <= mid; bg++)
		{
			if(s[bg] == n)
			{
				printf("Searched is : %d",s[bg]);
			}
		}
		j = bg;
	}
	
	system("pause");
	return 0;
}