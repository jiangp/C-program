#include"0119-head.h"
int main(int aigc,char *argv[])//���ԡ����ԣ�������е�ַ��1���ӿ�ͷ��
{
	FILE *fp;
	char ch,arr[30],arr1[10]={"hiddekel"};
	
	int m=0,n=0;
	fp=fopen(FLIE,"r");
	if(fp==NULL)
	{
		printf("err");	
	}else
	{
	  printf("yes\n");
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fscanf(fp,"%s",arr);
	    if(strcmp(arr,arr1)==0)
			n++;
	}
	printf("%d",n);
	system("pause");
	return 0;
}