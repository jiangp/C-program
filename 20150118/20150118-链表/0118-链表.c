#include"0118-Á´±íÌâ1.h"
void link_init_head(pNODE *pphead)
{
	int val;
	pNODE pnew;
	while(scanf("%d",&val)==1)
	{
		pnew=(pNODE)calloc(1,sizeof(pNODE));
		pnew->m_val=val;
		pnew->m_next=*pphead;
		*pphead=pnew;

	}
}


void show(pNODE phead)
{
	int i;
	pNODE pcur;
	pcur=phead;
	for(i=0;pcur!=NULL;i++)
	{
		printf("%d",pcur->m_val);
		pcur=pcur->m_next;
	}
	printf("\n");
}

void link_back(pNODE* phead)
{	
	pNODE p=*phead;
	pNODE q=p;		
	while(q->m_next!=NULL)
	{
		*phead=q->m_next;
		q->m_next=(*phead)->m_next;
		(*phead)->m_next=p;
		p=*phead;
	}

}


void link_add(pNODE *phead,pNODE *phead2)
{
	int i;
	pNODE pcur,pper,p,q;
	pcur=*phead;
	pper=*phead2;
	p=NULL;
	q=*phead2;
	for(i=0;pper!=NULL;i++)
	{
		while(pcur&&pcur->m_val<q->m_val)
		{
			p=pcur;
			pcur=pcur->m_next;
		}
		if(pper==NULL)
		{
			pper=pcur->m_next;
			*phead=q;
			
		}else
		{
			*phead2=q->m_next;
			q->m_next=pcur->m_next;
			p->m_next=q;
			
		}
		
	}
	printf("\n");
}