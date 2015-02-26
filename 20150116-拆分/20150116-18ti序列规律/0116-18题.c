#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 8
#define size 6
int main()
{
	int i,n,j,k=1;
	int m=0;
	char s[LEN]={1};
	for(i=1;i<size;i++)
	{
		j=0;
		m=0;
		while(s[j]!=0)
		{
		  if(s[j]==s[j+1])
		  {
		  	k++;
			j++;
		  }
		  else
		  {
			  s[m++]=k;
			  s[m++]=s[j];
			  k=1;
			  m++;
			 
		  }j++;
		}
		for(n=0;n<9;n++)
		{
           printf("%d ",s[n]);
		}
		printf("\n");
	} 
	system("pause");
	return 0;
}/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STEP 8
int main(int argc,char* argv[])
{
	char arr[100];
	int step=STEP;
	int i=0;
	int j=2;

	int cnt;
	arr[0]='1';
	arr[1]=' ';
	while(step)
	{
		while(arr[i]!=32)
		{
		    cnt=1;
			while(arr[i]==arr[i+1])
			{
				cnt++;
				i++;
			}
			arr[j++]=cnt+'0';
			arr[j++]=arr[i];
			i++;
		}
		arr[j]=32;
		j++;
		i++;
		step--;
	}
	arr[j]='\0';
	puts(arr);
	system("pause");
	return 0;
}
*/