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