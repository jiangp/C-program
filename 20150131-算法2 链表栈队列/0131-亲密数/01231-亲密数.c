#include<stdio.h>
#include<stdlib.h>
#define SIZE 3000
int l_sum(int val);
int main()
{
	int index ,j;

	for(index=2;index<=SIZE;index++)
	{ 
	
        for(j=2;j<index;j++)
		{
			
			if(l_sum(index)==j&&l_sum(j)==index)
			{
				printf("A:%d   B:%d\n",index,j);
			}	
		}
	}
	system("pause");
	return 0;
}
int l_sum(int val)
{
	int i ,sum=0;
	for(i=1;i<=val/2;i++)
	{
		if((val)%i==0)
		{
			sum+=i;
		}
	}
	return sum;
}