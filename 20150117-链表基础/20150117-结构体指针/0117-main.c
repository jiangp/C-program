#include"0117-�ṹ��.h"
void main ()
{
	pSTU=&STU;
	STU.m_num=1001;
	strcpy(STU.m_name,"С��");
	STU.m_score[1]=89.5;
	printf("%ld\n%s\n%4.2f\n",STU.m_num,STU.m_name,STU.m_score[1]);//�������
    printf("%ld\n%s\n%4.2f\n",(*pSTU).m_num,(*pSTU).m_name,(*pSTU).m_score[1]);//ָ�����
	system("pause");
	
}
