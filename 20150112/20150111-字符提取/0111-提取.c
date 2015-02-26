#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int word_cnt(char* src);
void func(char* src);
int main(int argc, char* argv[])
{
	char buf[1024] ;
	while(memset(buf, 0, 1024),gets(buf) != NULL)
	{
		
		printf("cnt: %d \n", word_cnt(buf));
		func(buf);
	}
	system("pause");
	return 0 ;
}
int word_cnt(char* src)
{
	int index = 0;
	int cnt = 0 ;
	while(src[index] != '\0')
	{
		//if(isalpha(src[index]) &&(index == 0 || index != 0 && src[index - 1] == ' '))// word_begin
		if(isalpha(src[index]) && (src[index + 1] == ' ' || src[index + 1] == 0 ))//word_end
		{
			cnt ++ ;
		}
		index ++ ;
	}
	return cnt ;
}


void func(char* src)
{
	int index=0,bg,end;
	int cnt = 0 ,index_;
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
		cnt++;
		end=index;
		index++;
		 printf("Êä³ö×Ö·û:\n");
		 printf("word %d :",cnt);

	     for(index_=bg;index_<=end;index_++)
	      { 
		   printf("%c",src[index_]);
 
	      }
		 printf("\n");
	}
}

