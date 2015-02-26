#include"0116-func.h"
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