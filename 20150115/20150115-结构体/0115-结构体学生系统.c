#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 8
#define size 5
typedef struct student
{
	int num;
	char name[LEN];//20
	int score[size];//5
}STU,*pSTU;
int a_sum(int *arr,int len);
void a_init(pSTU arr,int len);
void name_init(char *name,int len);
void score_init(int *score,int len);
void a_show(pSTU arr,int len);
void show(STU a);
int a_cmp(const void* left, const void* right);
int main()
{
	STU as[10];
	a_init(as,10);
	a_show(as,10);
	qsort(as,10,sizeof(STU),&a_cmp);
	printf("------------------------------------------\n");
	a_show(as,10);
	system("pause");
	return 0;
}
void a_init(pSTU arr,int len)	
{
	int i;
	for(i=0;i<len;i++)
	{
		arr[i].num=i;
		name_init(arr[i].name,LEN);
		score_init(arr[i].score,size);
	}

}
void name_init(char *name,int len)
{
	int i;
	for(i=0;i<=len-1;i++)
	{
		if(i==0)
		{
          name[i]='A'+rand()%26;
		}else
		{
			name[i]='a'+rand()%26;
		}
	}
}
void score_init(int *score,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		score[i]=rand()%100;
	}
}
void show(STU a)
{
	int i;
	printf("ID: %-3d",a.num);
	printf("Name: %8s",a.name);
	for(i=0;i<size;i++)
	{
		printf("%4d ",a.score[i]);
	}
	printf("%6d",a_sum(a.score,size));
	printf("\n");
}
void a_show(pSTU arr,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		show(arr[i]);
	}
}
int a_sum(int *arr,int len)
{
	int sum=0;
	int i;
	for(i=0;i<len;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int a_cmp(const  void* left,const void*right)
{
	int sum_left,sum_right;
	STU a_left=*(pSTU)left;
	STU a_right=*(pSTU)right;
	sum_left=a_sum(a_left.score,size);
	sum_right=a_sum(a_right.score,size);
	if(sum_left<sum_right)
	{
		return 1;
	}else if(sum_left==sum_right)
	{
		return 0;
	}else if(sum_left>sum_right)
	{
		return -1;
	}
}