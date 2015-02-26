#include<stdio.h>
#include<stdlib.h>
int main()
{
	int index,bg=0,end=9,zeo=0;
	int arr[12]={1,3,6,7,0,-2,6,-3,0,-5,7,8};
	while(bg<end)
	{
		while(arr[bg]<=0)
		{
			bg++;
		}
		while(arr[end]>0)
		{
			end--;
		}
		if(bg>=end)
		{
			break;
		}
		index=arr[bg];
		arr[bg]=arr[end];
		arr[end]=index;
	}
	for(index=0;index<10;index++)
	{
		printf("%d ",arr[index]);
	}
	system("pause");
	return 0;
}