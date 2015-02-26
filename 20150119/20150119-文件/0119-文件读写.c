#include"0119-文件操作.h"
int main(int aigc,char *argv[])//属性、调试，命令，，有地址【1】从开头读
{
	FILE *fp,*fp_write;
	char ch,arr[10];
	int cnt=0,sum=0,cha=0,k=0;
	int m=0,n=0;
	fp=fopen(argv[1],"r");
	fp_write=fopen(argv[2],"w");
	if(fp==NULL)
	{
		printf("err");	
	}else
	{
	  printf("yes\n");
	}
	while((ch=fgetc(fp))!=EOF)
	{
		
		sum++;
		if(ch>=65&&ch<91||ch>=97&&ch<=122)
	    {
			if(ch>=65&&ch<91)
			{
				ch=ch+32;
			}
			cnt++;
		}
		if(ch==' ')
		{
			cha++;
		}
		if(ch=='\n')
		{
			k++;
		}
		if(ispunct(ch))//
		{
			ch=' ';
			m++;
		}
		
		//if(fscanf(fp,"%s",arr))//文件取出单词
			n++;
		//putchar(ch);
		fputc(ch,fp_write);//写入文件
	}
	printf("sum: %d cha: %d cnt: %d  k:  %d  m :%d  n: %d",sum,cha,cnt,k,m,n);
	system("pause");
	return 0;
}