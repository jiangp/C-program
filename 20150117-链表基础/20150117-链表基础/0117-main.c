#include"0117-链表.h"
int main()
{
	int val=0;
	pNODE phead ;
	phead = NULL;
	link_init_sort(&phead);//顺序插入
	show(phead);
	//scanf("%d",&va);
	while(scanf("%d",&val)==1)//循环
	{
	   link_delete(&phead,val);//删除其中项
	   show(phead);
	   printf("\n");
	}
	link_destroy(&phead);//销毁链表
	show(phead);
	system("pause");
	return 0;
}
	
