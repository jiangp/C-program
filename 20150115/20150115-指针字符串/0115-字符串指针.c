#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *arr2;
	char arr[20];
	int i;
	char *p1,*p2;
	arr2="i am a surper man.";
	p1=arr;p2=arr2;
	for(;*p2!='\0';p1++,p2++)
		*p1=*p2;
	*p1='\0';
	printf("%s\n",arr);
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	system("pause");
	return 0;

}