#include"0119-�ļ�����.h"
int main(int aigc,char *argv[])//���ԡ����ԣ�������е�ַ��1���ӿ�ͷ��
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
		
		//if(fscanf(fp,"%s",arr))//�ļ�ȡ������
			n++;
		//putchar(ch);
		fputc(ch,fp_write);//д���ļ�
	}
	printf("sum: %d cha: %d cnt: %d  k:  %d  m :%d  n: %d",sum,cha,cnt,k,m,n);
	system("pause");
	return 0;
}