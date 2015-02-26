#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,index,j;
	
	int a1[10]={0,1,2,3,4,5,5,6,7,8};
	int a2[10]={1,1,2,3,4,33,5,6,12,10};
	int a3[10]={0};
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a1[i]==a2[j])
			{
				a3[i]=a2[j];
				break;
			}
		}
	for(index=0;index<10;index++)
	{
	     printf("%d\n",&a3[index]);
	}
	system("pause");
	return 0;
}