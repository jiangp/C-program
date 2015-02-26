#include"0116-16ti.h"
void func(char *arr)
{
	int i,j=0;
	int k,cnt=0;
	
	printf("%d\n",strlen(arr));
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i]>=65&&arr[i]<92||arr[i]>=97&&arr[i]<=122)
		{
			j++;
			if(arr[i]!=' '&&arr[i+1]==' '||arr[i]!=' '&&arr[i+1]=='\0')
			{cnt++;}
		}
	}
	k=(strlen(arr)-j)/cnt;
	func1(arr,k);
}
void func1(char* src,int len)
{
	int index=0,bg,end,j;
	int index_;
	while(src[index]!='\0')
	{ 
		while(src[index]==' ')
		{
			index++;
		}
		if(src[index] == '\0')
		{
			break ;}
		bg=index;
		while(!(src[index+1]==' '&&src[index]!=' '||src[index+1]=='\0'&&src[index]!=' '))
		{
			index++;
			
		}
		//cnt++;//
		end=index;
		index++;
		// printf("Êä³ö×Ö·û:\n");
		// printf("word %d :",cnt);

	     for(index_=bg;index_<=end;index_++)
	      { 
		   printf("%c",src[index_]);
 
	      }
		 for(j=0;j<=len;j++)
		 {
		    printf(" ");
		 }
	}
}

