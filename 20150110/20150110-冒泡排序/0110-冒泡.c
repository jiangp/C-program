#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pai(int a[])
{
	int i,j,k;//冒泡排序
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
	for(i=0;i<10;i++)//比较输出相同项
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


/*

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100000
void array_init(int* arr, int len);
void array_buble(int* arr, int len);
void array_show(int* arr, int len);
int main(int argc, char* argv[])
{
	int arr[SIZE];
	clock_t bg, end ;
	array_init(arr, SIZE);

	//array_show(arr, SIZE);
	printf("\n");
	bg = clock();
	array_buble(arr, SIZE);
	end = clock();
	//array_show(arr, SIZE);
	printf("\n");
	printf("time: %.9fs\n", (double)(end - bg) / CLOCKS_PER_SEC);
	system("pause");
	return 0 ;
}
void array_init(int* arr, int len)
{
	int i ;
	for(i = 0; i != len; i ++)
	{
		arr[i] = rand() % 100 ;
	}
}
void array_show(int* arr, int len)
{
	int i ;
	for(i = 0; i != len; i ++)
	{
		printf("%d ", arr[i]);
	}
}
void array_buble(int* arr, int len)
{
	int down, up ;
	int up_cnt, down_cnt ;
	int index, tmp;
	down = len ;
	up = -1 ;

	up_cnt = 0 ;
	down_cnt = 0 ;
	while(up <= down)
	{
		//[up+ 1, down -1] , (up, down)

		// downword
		for(index = up + 1 ; index + 1 < down  ; index ++)
		{
			if(arr[index] > arr[index + 1])
			{
				tmp = arr[index] ;
				arr[index] = arr[index + 1] ;
				arr[index + 1] = tmp ;
			}
		}

		down -- ;

		//upword
		//[up+ 1, down -1] , (up, down)
		for(index = down - 1; index - 1 > up ; index --)
		{
			if(arr[index] < arr[index - 1])
			{
				tmp = arr[index] ;
				arr[index] = arr[index - 1] ;
				arr[index - 1] = tmp ;
			}
		}
		up ++ ;
	}
}
*/