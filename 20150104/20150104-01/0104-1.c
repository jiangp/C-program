//������ת��Ϊ��������
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
	printf("�������%dת��Ϊ%d���ƺ�Ϊ��\n",k,n);
	for(;i!=0;i--)
		{
			printf("%d",sum[i-1]);//�����Ǹ�ѭ�����е����һ��ʱ��j++���ǻ�����һ�Σ����Ǵ�ʱ��û�и�aa[j]��ֵ
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
	printf("ʮ����ת��Ϊʮ���½������롰a����\n");
	printf("ʮ���½���ת��Ϊʮ�������롰b����\n");
	printf("ʮ����ת��Ϊʮ���Ͻ������롰c����\n");
	printf("ʮ���Ͻ���ת��Ϊʮ�������롰d����\n");
	printf("*********************************\n");
	
	
	while(scanf("%c",&ch))
	{
		switch(ch)
		{
		case 'b':
			//N����ת��Ϊʮ				
	printf("�����������\n");
	scanf("%d",&m);
	printf("������ƣ�\n");
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
			printf("�������");
			system("pause");
		    exit(0);
		}
       
	}
	printf("ת��ΪB������Ϊ:\n");
    printf("%d",sum);
	system("pause");
			break;		
		case 'a':
			//ʮ����ת��Ϊ\10����
			for(i=0;m!=0;i++)
	      {

			  sum[i]=m%n;
	          m=m/n; 
	      }
			printf("�������%dת��Ϊ%d���ƺ�Ϊ��\n",5,n);
	for(;i!=0;i--)
		{
			printf("%d",sum[i-1]);//�����Ǹ�ѭ�����е����һ��ʱ��j++���ǻ�����һ�Σ����Ǵ�ʱ��û�и�aa[j]��ֵ
		}
			printf("world!!");
			system("pause"); 
		    break;
		case 'c':
			//10׼��Ϊ16
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