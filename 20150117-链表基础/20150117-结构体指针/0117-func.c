#include"0117-½á¹¹Ìå.h"
void link_init_tail(pNODE *pptail)
{
	int val;
	pNODE head=NULL,pnew,ptail,pcur;
	while(scanf("%d",&val)==1)
	{
		pnew=(pNODE)calloc(1,sizeof(NODE));
		pnew->data=val;
		if(head==NULL)
		{
			head=pnew;
			ptail=pnew;
		}else
		{
			ptail->next=pnew;
			ptail=pnew;
		}
	}
}
void show(pNODE *ppNODE)
{
	pNODE pcur;
	pcur=head;
	while(pcur!=NULL)
	{
		printf("%d",pcur->data);
		pcur=pcur->next;
	}
}