#include"0117-����.h"
int main()
{
	int val=0;
	pNODE phead ;
	phead = NULL;
	link_init_sort(&phead);//˳�����
	show(phead);
	//scanf("%d",&va);
	while(scanf("%d",&val)==1)//ѭ��
	{
	   link_delete(&phead,val);//ɾ��������
	   show(phead);
	   printf("\n");
	}
	link_destroy(&phead);//��������
	show(phead);
	system("pause");
	return 0;
}
	
