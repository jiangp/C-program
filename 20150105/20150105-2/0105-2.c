//ÒÆÎ»Êä³ö12345678-¡·78563412
#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int num,num1,num2,num3,num4;
	unsigned int val=0;
	while(scanf("%p",&val)==1)
	{
	   num1=0xff000000&val;
	   num2=0xff0000&val;
	   num3=0xff00&val;
	   num4=0xff&val;
	  

	   num1=num1>>24;
	   num2=num2>>8;
	   num3=num3<<8;
	   num4=num4<<24;
	   num=num1+num2+num3+num4;


	   printf("%x",num);
	}

	
	//printf("%d, %d, %d",++b,++b,++b);
	system("pause");
	return 0;



}/*
#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable :4996)

int main(int agrc, char *argv[])
{
	unsigned int ivar=0;
	unsigned int num, num1, num2, num3, num4;
		while (scanf("%p", &ivar) == 1){
			

			num1 = 0xff000000 & ivar;
			num2 = 0xff0000 & ivar;
			num3 = 0xff00 & ivar;
			num4 = 0xff & ivar;

			num1 = num1 >> 24;
			num2 = num2 >> 8;
			num3 = num3 << 8;
			num4 = num4 << 24;
			num = num1 + num2 + num3 + num4;

			printf("%x", num);
		}
	system("pause");
	return 0;

}*/




/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int ival ;
	int res ;
	double pi = 3.14 ;
	//printf("%15.7f\n", pi);
	while(fflush(stdin), printf("enter a value: "),scanf("%p", &ival) == 1)
	{
		res = ( (ival >> 24 ) & 0xff ) | ( (ival >> 8 ) & 0xff00 ) | ( (ival << 8) & 0xff0000 ) | ((ival << 24) & 0xff000000) ;
		printf("before: %08x, after: %8x\n", ival, res );
	}
	return 0 ;
}*/