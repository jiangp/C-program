/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,k;
	char arr[15][15];
	printf("********Pithy Formula Table of Multiplication********\n");

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==0)
			{
			   arr[i][j]=(i+1)*j;
	            // printf("%4d",arr[i][j]); 
		
			}
			else if(j==0)
			{
				
		      arr[i][j]=i*(j+1);
	          //printf("%4d",arr[i][j]);
			  //j--;
			}else
			{
				
		      arr[i][j]=i*j;
	          //printf("%4d",arr[i][j]);
			}
           
		}
		
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<12;j++)
		{
			if(i==0&&j==2||j<2)
			   printf("    ");
			else
			{
				printf("%4d",arr[i][j-2]);
			}
		}printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}*/

//找出不重数
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k=0;
	int arr[10]={1,1,2,3,3,4,4,5};
	for(i=0;i<10;i++)
	{
		k=0;
		for(j=0;arr[j]!='\0';j++)
		{
			if(arr[i]==arr[j])
			{
				k++;
			}
		}
		if(k==1)
		{
			printf("%d\n",arr[i]);
		}
	}
	system("pause");
	return 0;
}