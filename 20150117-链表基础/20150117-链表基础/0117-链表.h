#ifndef _FUNC_
#define _FUNC_
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
#endif