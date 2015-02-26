#include<stdio.h>
#include<stdlib.h>
#define  SIZE  10
//二分法  普通方法
int main()
{
	int index,n=0;
	int max = 0x80000000;
	int max2 = 0x80000000;
	int s[SIZE] = {1,2,3,4,5,6,7,8,9,0};
	for(index = 0; index < 10; index++)
	{
		if(s[index] > max2)
		{
			max2 = s[index];
			if(max2 > max)
			{
				n = max;
				max = max2;
				max2 = n;
			}
		}	
	}
	printf("max :%d\n" , max);
	printf("max2 :%d\n" , max2);
	system("pause");
	return 0;
}