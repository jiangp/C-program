#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct  node
{
	int m_val;
	struct node * m_next;
}NODE,*pNODE;
void link_init_tail(pNODE *pphead);
void link_init_head(pNODE *pphead);
void link_init_sort(pNODE *pphead);
void link_delete(pNODE *pphead,int val);
void link_destroy(pNODE *pphead);
void show(pNODE phead);
int main()
{
	int val=0;
	pNODE phead ;
	phead = NULL;
	//link_init_sort(&phead);//顺序插入
	link_init_head(&phead);
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
	
//尾插法
void link_init_tail(pNODE pphead)
{
	int val;
	pNODE pnew,ptail;
	while(scanf("%d",&val)==1)
	{
		pnew=(pNODE)calloc(1,sizeof(NODE));
		pnew->m_val=val;
		if(pphead==NULL)
		{
			pphead=pnew;
			ptail=pnew;
		}else
		{
			ptail->m_next=pnew;
			ptail=pnew;
		}
	}
	//val=3;
}

//头插发
void link_init_head(pNODE pphead)
{
	int val;
	pNODE head=NULL,pnew;
	while(scanf("%d",&val)==1)
	{
		pnew=(pNODE)calloc(1,sizeof(NODE));
		pnew->m_val=val;
		pnew->m_next=pphead;
		pphead=pnew;	
	}
}


//顺序插法
void link_init_sort(pNODE pphead)
{
	int val;
	pNODE pnew,pcur,ppre;
	while(scanf("%d",&val)==1)
	{
		pnew=(pNODE)calloc(1,sizeof(NODE));
		pnew->m_val=val;
		pcur=pphead;
		ppre=NULL;
		while(pcur&&pcur->m_val<pnew->m_val)
		{
			ppre=pcur;
			pcur=pcur->m_next;
		}
		if(ppre==NULL)
		{
			pnew->m_next=pphead;
			pphead=pnew;
		}else
		{
			pnew->m_next=pcur;
			ppre->m_next=pnew;
		}

	}
	
}
//删除链表
void link_delete(pNODE pphead,int val)
{
	pNODE pcur,ppre;
	while(scanf("%d",&val)==1)
	{
	     pcur=pphead;
	     ppre=NULL;
	     while(pcur&&pcur->m_val!=val)
		 {
			 ppre=pcur;
			 pcur=pcur->m_next;
		 }
		 if(pcur==NULL)
		 {
			 printf("not exist !\n");
		 }else
		 {
			 if(ppre==NULL)
			 {
				 pphead=pcur->m_next;
				 free(pcur);
			 }else
			 {
				 ppre->m_next=pcur->m_next;
				 free(pcur);
			 }
		 }
	}
}


//销毁链表
void link_destroy(pNODE pphead)
{
	pNODE pcur,ptmp;
	pcur=pphead;
	while(pcur)
	{
		ptmp=pcur;
		pcur=pcur->m_next;
		free(ptmp);
	}
	pphead=NULL;
}

//输出链表
void show(pNODE phead)
{
	pNODE pcur;
	pcur=phead;
	while(pcur !=NULL)
	{
		printf("%d",pcur->m_val);
		pcur=pcur->m_next;
	}
	printf("\n");
}