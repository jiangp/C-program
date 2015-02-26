//¾ØÕóµÄ×ªÖÃ
#include<stdio.h>
#include<stdlib.h>
#define N 4

void func(int (*arr)[N]);
int main()
{
	int arr[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j,k;
	func(arr);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
          printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;

}
void func(int (*arr)[N])
{
	int i,j,k;
	for(i=0;i<N;i++)
	{
		for(j=0;j<i;j++)
		{
			k=arr[i][j];
          arr[i][j]=arr[j][i];
		  arr[j][i]=k;
		}
	}
}