#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char buf[20];
	int j=0,l=0,k=0;
	int i;
	char*p=buf;
	//scanf("%s\n",&buf);
	gets(buf);
	
	for(i=0;i<=strlen(buf);i++)
	{
	
	   if(buf[i+1]==' '&&buf[i]!=' '||buf[i+1]=='\0'&&buf[i]!=' ')
	   {
		  j++;
		  k=i;
	   }
	}
	printf("%d\n",j);
	
	system("pause");	
	return 0;
}


/*
char* strcpy(char arr1[],char arr2[]);
int main(int argc,char* argv[])
{
	char arr1[100],arr2[100];
	int i;
	gets(arr2);
	strcpy(arr1,arr2);
	puts(arr1);
    system("pause");
	return 0;
}
char* strcpy(char arr1[],char arr2[])
{
	int i=0;
	while(arr2[i]!='\0')
	{
		arr1[i]=arr2[i];
		i++;
	}
	arr1[i]='\0';
	return arr1;
}
*/