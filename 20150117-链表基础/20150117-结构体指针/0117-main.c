#include"0117-结构体.h"
void main ()
{
	pSTU=&STU;
	STU.m_num=1001;
	strcpy(STU.m_name,"小妹");
	STU.m_score[1]=89.5;
	printf("%ld\n%s\n%4.2f\n",STU.m_num,STU.m_name,STU.m_score[1]);//变量输出
    printf("%ld\n%s\n%4.2f\n",(*pSTU).m_num,(*pSTU).m_name,(*pSTU).m_score[1]);//指针输出
	system("pause");
	
}
