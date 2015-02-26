//指针二维数组
#include<stdio.h>
#include<stdlib.h>
void fun2(float (*point)[4],int m);
void fun1(float *point,int n);
int main()
{
	int num;
	static float arr[4][4]={{43,59,67,46},{13,43,56,79},{76,45,88,90,},{54,57,90,43}};
	printf("average:\n");
	fun1(*arr,16);
	printf("请输入学生学号：");
	scanf("%d",&num);
	fun2(arr,num);
	system("pause");
	return 0;
}
void fun1(float *point,int n,int m)
{
	float *p_end;
	float aver;
	float sum=0;
	p_end=point+n-1;
	for(;point<=p_end;point++)
	{
		sum=sum+(*point);
	}
	aver=sum/n;
	printf("%5.2f\n",aver);
}
void fun2(float (*point)[4],int m)
{
	int i;
	for(i=0;i<4;i++)
		printf("%5.2f ",*(*(point+m)+i));
}