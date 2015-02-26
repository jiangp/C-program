#include<stdio.h>
#include<stdlib.h>
int main()
{
	int nian,yue,ri=0;
	//while(fflush(stdin)))==1 )
	printf("输入日期:\n");
	scanf("%d%d%d",&nian,&yue,&ri);
		switch(yue)
		{
		case 1:
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri);
			break;
		case 2:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+31);
			break;
		case 3:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+59);
			break;
		case 4:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+90);
			break;
		case 5:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+120);
			break;
		case 6:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+151);
			break;
		case 7:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+181);
			break;
		case 8:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+212);
			break;
		case 9:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+243);
			break;
		case 10:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+273);
			break;
		case 11:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+304);
			break;
			
		case 12:
			if((nian%4==0)&&(nian%100!=0)||(nian%400==0))
				ri++;
			printf("%d月 %d日是%d年的第%d天",yue,ri,nian,ri+334);
			break;


		}
	
	system("pause");
	return 0;
}
