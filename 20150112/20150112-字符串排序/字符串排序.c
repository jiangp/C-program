/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define hang 32
#define lie 20
int main()
{
	char arr[hang][lie]={""};
	char tmp[lie];
	int index,i,j,cnt=0,bg,end;
	while(gets(arr[cnt++]) !=NULL&&cnt<=hang)
	{
	}
	system("cls");
	index = 0 ;
	for(; index != cnt; index++)
	{
		puts(arr[index]);
	}
	for(i=1;i<cnt;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(strcmp(arr[j],arr[i])<0);
			{
				break;
			}
		}
		bg=j+1 ;
		end=i ;
		strcpy(tmp,arr[end]) ;
		for(end=end-1 ; end>=bg;end--)
		{
			strcpy(arr[end+1],arr[end]);
		}
		strcpy(arr[bg],tmp);
	}
	printf("------------------------------------\n");
	for(index=0;index!=cnt; index++)
	{
		puts(arr[index]);
	}
	system("pause");
	return;
}

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define WD_SIZE 20 
#define WD_LEN  32
int main(int argc, char* argv[])
{
	char arr[WD_SIZE][WD_LEN] = {""} ;//arr[i]
	//char* arr[WD_SIZE] = {"hello","world", "how", "are","you"};
	char tmp[WD_LEN];
	//char str[10];
	//gets(str);
	int index ;
	int i, j, bg, end ;
	int cnt = 0 ;	
	while(gets(arr[cnt ++]) != NULL && cnt <= WD_SIZE)//输入二维数组
	{
	}
	system("cls");
	index = 0 ;
	for(; index != cnt; index++)
	{
		puts(arr[index]);
	}
	for(i = 1; i < cnt; i ++)
	{
		for(j = i - 1; j >= 0; j --)
		{
			if(strcmp(arr[j], arr[i]) < 0 )
			{
				break ;
			}
		}
		bg = j + 1 ;
		end = i ;
		strcpy(tmp, arr[end]);
		for(end = end - 1; end >= bg; end --)
		{
			strcpy(arr[end + 1], arr[end]);
		}
		strcpy(arr[bg], tmp);
	}
	printf("--------------------\n");
	index = 0 ;
	for(; index != cnt; index++)
	{
		puts(arr[index]);
	}
	system("pause");
	return 0 ;
}