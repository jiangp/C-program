/*//结构体应用
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
#define size 5

typedef struct student
{
	int num;
	char name[SIZE];//20
	int score[size];//5
}STU,*ST;
void show(STU a);
int main()
{
	int i;
	STU a={1001,"zhangsan",90,80,67,65,54};
	STU a1;
	STU a2;
	show(a);

	a1.num=1002;
	strcpy(a1.name,"lisi");
	a1.score[0]=12;
	a1.score[1]=55;
	a1.score[2]=98;
	a1.score[3]=45;
	a1.score[4]=55;
	show(a1);

	memset(&a2,0,sizeof(STU));
	scanf("%d%s%d%d%d%d%d",&a2.num,a2.name,&a2.score[0],&a2.score[1],&a2.score[2],&a2.score[3],&a2.score[4]);
	show(a2);
	system("pause");
	return 0;
}
void show(STU a)
{
	int i;
	printf("ID: %d \n",a.num);
	printf("Name: %s\n",a.name);
	for(i=0;i<5;i++)
	{
		printf("%d ",a.score[i]);
	}
	printf("\n");
}

*/
