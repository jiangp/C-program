//哥德巴赫猜想
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,j,num;
	int p,q,flagp,flagq;
	printf("Please input a plus integet: ");
	scanf("%d",&num);
	//判断是否是非0偶数
	if(num<=4||num%2!=0)
		printf("input data error!\n ");
	else
	{
		p=1;
		do
		{
			p=p+1;
			q=num-p;
			flagp=1;
			flagq=1;
			for(i=2;i<=(int)(floor(sqrt((double)(p))));i++)
			{
				if((p%i)==0)
				{
					flagp=0;
					break;
				}

			}
			j=2;
			while(j<=(int)(floor(sqrt((double)(q)))))
			{
				if((q%j)==0)
				{
					flagq=0;
					break;
				}
				j++;
			}	
		}while (flagp*flagq==0);
	}
    printf("%d=%d+%d\n",num,p,q);
	system("pause");
	return 0;
}