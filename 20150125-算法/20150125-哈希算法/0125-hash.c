#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 80
//�����һ������һ�ε��ַ�
int main()
{
	int index,j=0,k=0;
	int arr[255]={0};
	char str[]={"hsdjadisjrh"};
   // printf("%d",strlen(str));
	for(index=0;index <strlen(str);index++)
	{
		arr[str[index]]++;		
	}
	for(index=0;index<strlen(str);index++)
	{
	   if(arr[str[index]]==1)
	   {
		   printf("first char is :%c",str[index]);
		   break;
	   }
	}
    system("pause");
	return 0;
}