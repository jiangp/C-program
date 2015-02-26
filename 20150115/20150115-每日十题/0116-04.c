#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  hang  4
#define  LEN  4
int main()
{
	int i,j,m,n;
	int tmp;
	int a,b;
	int max;
	int min=0x7fffffff;
	int arr[hang][LEN];
	for(i=0;i<hang;i++)//
	{
		for(j=0;j<LEN;j++)
		{
			arr[i][j]=rand()%98;
		}
	}
	for(i=0;i<hang;i++)//
	{
		for(j=0;j<LEN;j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
    printf("-------------------------------------\n");
	for(a=0;a<hang;a++)
	{
		for(b=0;b<LEN;b++)
		{
			max=0x80000000;
			for(i=a;i<hang;i++)
			{
				for(j=b;j<LEN;j++)
				{
					if(arr[i][j]>max)
					{
						max=arr[i][j];
						m=i;n=j;
					}

				}
			}
			tmp=arr[m][n];
			arr[m][n]=arr[a][b];
			arr[a][b]=tmp;
			//k++;
			//printf("%4d",arr[0][3]);
		}
	}
	
	for(i=0;i<hang;i++)
	{
		for(j=LEN-1;0<=j;j--)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}