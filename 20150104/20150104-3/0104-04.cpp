//N进制转化为十进制
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*int main()
{
	int i,s[20],n,k,N;
	int	sum=0;
	printf("输入进制数：\n");
	scanf("%d",&n);
	printf("输入进制：");
	scanf("%d",&N);
	
	for(i=0;n!=0;i++)
	{
		if(n%10<=N-1)
		{
		   s[i]=n%10;
		   n=n/10;
		   k=pow((double)N,(double)i);
		   sum+=s[i]*k;
	
		   
		}
		else
		{
			printf("输入错误！");
			system("pause");
		    exit(0);
		}
       
	}
	printf("转化为十进制数为:\n");
    printf("%d",sum);
	system("pause");
	return 0;
}*/
//进制转换
#define base 16
int main(int argc, char* argv[])
{
	//char res[]="";
	char* str_h[]="0123456789ABCDEF";
	int ival;
	int index;
	while(scanf("%d",&ival)==1)
	{
		index=0;
		while(ival)
		{
			//res[index] = "0123456789ABCDEF"[ival%base];
			//ival%base["0123456789ABCDEF"]
			str_h[ival%base];
			index++;
			ival=ival/base;

		}
		index--;
		while(index>=0)
		{
			printf("%c",str_h[index]);
			index--;
		}
		system("pause");
	}
	return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
	int ret,val1,val2;
       while(ret=scanf("%d %d",&val1,&val2)==1)
	         printf("val1:%d, val2:%d ,ret:%d",val1,val2,ret);
	
	system("pause");

	return 0;
}
*/