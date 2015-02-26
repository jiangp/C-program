#include<stdio.h>
#include<stdlib.h>
int main()
{
	////////////////////////////////
	/*//九九乘法表
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j>i)
			{
				printf("\n");
				break;
			}
			else
			{
			    printf(" %d*%d=%d",i,j,i*j);
			}
		}
	}
	
	//////////////////////////////////////////////
	//输出菱形
    int k,i,j;
	for(i=0;i<11;i++)
	{
		if(i<6)
		{
			for(j=0;j<5-i;j++)
			{
				printf(" ");
			}
			for(k=0;k<2*i+1;k++)
			{ 
				printf("*");
			}
		}
		else
		{ 
			for(j=0;j<i-5;j++)
			{
				printf(" ");
			}
			for(k=0;k<2*(10-i)+1;k++)
			{ 
				printf("*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;

	//////////////////////////////////////////////
	//输出空菱形只可输入偶数
    int k,i,j;
	scanf("%d",&k);
	for(i=1;i<k;i++)
	{
		if(i<((k+3)/2))
		{
			
			for(j=1;j<k+1;j++)
			{
				if(j==(k/2-i+1)||(k/2+i-1)==j)
				   printf("*");
				else
					printf(" ");				
			}
		}
		else
		{ 
			for(j=1;j<k+1;j++)
			{
				if(j==(i-k/2+1)||(k+(k-2)/2-i)==j)
				   printf("*");
				else
				   	printf(" ");			
			}
		}
		printf("\n");
	}*/
	//////////////////////////////////////////////
	//输出菱形2
    int k,i,j;
	for(i=0;i<11;i++)
	{
		if(i<6)
		{
			for(j=0;j<5-i;j++)
			{
				printf(" ");
			}
			for(k=0;k<i;k++)
			{ 
				printf("* ");
			}
		}
		else
		{ 
			for(j=0;j<i-5;j++)
			{
				printf(" ");
			}
			for(k=0;k<(10-i);k++)
			{ 
				printf("* ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

