#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128
int main()
{
	char **arr;
	char word [32];
	int cnt=0;
	int index;
	arr=(char**)calloc(SIZE,sizeof(char*));
	while(memset(word,0,32),gets(word)!=NULL)//���word��32�ַ����ȵ��ڴ�Ϊ0
	{
		arr[cnt]=(char*)calloc(strlen(word)+1,sizeof(char));//����arr���ڴ�
		strcpy(arr[cnt],word);
		cnt++;

	}
	for(index=0;index<cnt;index++)
	{
		printf("%s",arr[index]);
	}
	system("pause");
	return 0;
}

/**//*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128
int main(int argc, char** argv)// "1234" -> 12345
{
	//char* arr[128]
	char** arr; 
	char word[32] ;
	int cnt = 0 ;
	int index ;
	arr = (char**)calloc(SIZE, sizeof(char*));
	printf("argc: %d\n", argc);
	for(index = 0; index < argc ; index ++)
	{
		printf("argv[%d]: %s\n", index, argv[index]);
	}
	/*while(memset(word, 0, 32), gets(word) != NULL)
	{
		//arr[cnt] = (char*)calloc(strlen(word) + 1, sizeof(char));
		strcpy(arr[cnt], word);
		cnt ++ ;
	}
	for(index = 0; index < cnt/*arr[index] != NULL//; index ++ )
	{
		printf("%d: %s\n", index + 1, arr[index]);
	}
	system("pause");
	return 0 ;
}*/

