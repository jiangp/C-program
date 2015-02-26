#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 2/*
void func(int *a[])
{
	//int a[]={0};
	int j,i=0;
	printf("输入一组数：");
	for(j=0j<size;j++)
	}
	for(i=0;i<10;i++)
	{
	    scanf("%d",*a[size][i]);//输入数组
		
	}
	}
}
void fun()
{
	int i,j;
	int a3[10]={0};
	int a1[10]={0,1,2,3,4,5,5,6,7,8};
	int a2[10]={1,1,2,3,4,33,5,6,12,10};
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a1[i]==a2[j])
			{
				a3[i]=a2[j];
				break;
			}
		}
	}
}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pai(int a[])
{
	int i,j,k;
	{for(i=0;i<9;i++)

		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])

			{

				k=a[j];

				a[j]=a[j+1];

				a[j+1]=k;

			}
		}
	}
	for(i=0;i<10;i++)
	{
	// printf("%d ",a[i]);
	}
}
int main()
{

	int i,k=0,j;

	int a1[10]={1,2,3,5,6,7,5,8,9,10};
	int a2[10]={1,1,2,3,4,33,5,6,12,10};	
	pai(a1);
	pai(a2);
	for(i=0;i<10;i++)
	{
		for(j=k;j<10;j++)
		{
			if(a1[i]==a2[j])
			{
				if(a1[i]!=a2[j-1])
				{
					k=j;
					k++;
				    printf("%d\n",a2[j]);			
			     	break;
				}
			}
		}
	}		
	system("pause");
	return 0;

}