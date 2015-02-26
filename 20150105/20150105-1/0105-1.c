#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main()
{
	/*int i=3;
	int j=4;
	if(i>5&&j++>3)
	{
		printf("i:%d,  j:%d\n",i,j);
	}
	else
		printf("i:%d,  j:%d\n",i,j);


	int i=123;
	int b=-123;
	i=i>>1;
	b=b<<1;



	/////////////////////////////////
	int val,i,s[20]={0};
	int n=0;
	printf("输入数：\n");
	scanf("%d",&val);
	for(i=0;val!=0;i++)
	{
		s[i]=val%2;
		val=val/2;
	}
	for(i=0;i<10;i++)
	{
		if((s[i]&1)==1)
		     n++;
		else
			continue;
	}

	///////////////////////////////////
	int unm,val,n=0;
	printf("输入数：\n");
	scanf("%d",&val);
	do{
	unm=val%2;
	val=val/2;
	if(1&unm)
		n++;
	unm=unm>>1;

	}while(val>0);*/
	//////////////////////////////////////////
	int index;
	int val;
	int cnt;
	while(fflush(stdin),scanf("%d",&val)==1)
	{
		index=0;
		cnt=0;
		while(index<=31)
		{
			if((val&(1<<index))!=0)
				cnt++;
			index++;
		}
		printf("1: %d\n",cnt);
	}

	
	system("pause");
	return 0;

}