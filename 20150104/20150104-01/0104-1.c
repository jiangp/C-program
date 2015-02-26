//进制数转换为其他进制
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define base 16
/*int func(int m,int n)
{
	int sum[20],i,k=m;
	for(i=0;m!=0;i++)
	{
		
	       sum[i]=m%n;
	       m=m/n; 
		

	}
	printf("输入的数%d转换为%d进制后为：\n",k,n);
	for(;i!=0;i--)
		{
			printf("%d",sum[i-1]);//上面那个循环进行到最后一步时，j++还是会运行一次，但是此时并没有给aa[j]赋值
		}
    
    return 0;
}*/


int main()
{
	int i;
	int j;
	int n;
	int m,s[20]={0},sum=0;
	char ch;
	printf("*********************************\n");
	printf("十进制转化为十以下进制输入“a”：\n");
	printf("十以下进制转化为十进制输入“b”：\n");
	printf("十进制转化为十以上进制输入“c”：\n");
	printf("十以上进制转化为十进制输入“d”：\n");
	printf("*********************************\n");
	
	
	while(scanf("%c",&ch))
	{
		switch(ch)
		{
		case 'b':
			//N进制转化为十				
	printf("输入进制数：\n");
	scanf("%d",&m);
	printf("输入进制：\n");
	scanf("%d",&n);
	
	for(i=0;m!=0;i++)
	{
		if(m%10<=n-1)
		{
		   s[i]=m%10;
		   m=m/10;
		   sum+=s[i]*pow((double)n,(double)i);
	
		   
		}
		else
		{
			printf("输入错误！");
			system("pause");
		    exit(0);
		}
       
	}
	printf("转化为B进制数为:\n");
    printf("%d",sum);
	system("pause");
			break;		
		case 'a':
			//十进制转化为\10进制
			for(i=0;m!=0;i++)
	      {

			  sum[i]=m%n;
	          m=m/n; 
	      }
			printf("输入的数%d转换为%d进制后为：\n",5,n);
	for(;i!=0;i--)
		{
			printf("%d",sum[i-1]);//上面那个循环进行到最后一步时，j++还是会运行一次，但是此时并没有给aa[j]赋值
		}
			printf("world!!");
			system("pause"); 
		    break;
		case 'c':
			//10准换为16
			char res[]="";
	char* str_h="0123456789ABCDEF";
	int ival;
	int index;
	while(scanf("%d",&ival)==1)
	{
		index=0;
		while(ival)
		{
			//
			res[index]=str_h[ival%base];
			index++;
			ival=ival/base;

		}
		index--;
		while(index>=0)
		{
			printf("%c",res[index]);
			index--;
		}
		system("pause");
	}
	return 0;
			

			break;
		case 'd':
			printf("nihao");



			break;

		}
	}
	
	system("pause");
    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num,i,j,k,base;
	int a[15]={0};
	i=0;
	printf("please input the num:    ");
	scanf("%d",&num);
	printf("please choice the next step:\n2:10-2\n8:10-8\n16:10-16\n");
	scanf("%d",&base);
	
	switch(base)
	{
	case 2:
	case 8 :	do{
					k=num%base;
					num=num/base;
					a[i]=k;
					i++;
				}while(num>0);
				printf("\n");
			for(;i>0;i--)
				{
				printf("%d",a[i-1]);
				}
				printf("\n");
				break;
	case 16:	do{
					k=num%16;
					num=num/16;
				
					if(k>9)
					{
						k=55+k;
						a[i]=k;
						i++;
					 break;
					}
					else
					{	k=k+48;
						a[i]=k;
						i++;
					 }
				}while(num>0);
				printf("\n");
				j=i;
			for(;i>0;i--)
				printf("%c",a[i-1]);	
			printf("\n");		
			break;
	default:break;
	}
system("pause");
}

*/