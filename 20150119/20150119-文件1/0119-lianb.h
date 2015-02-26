#ifndef __FUNC__
#define __FUNC__
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
typedef struct tag
{
	int m_val;
	struct tag *m_next;
} NODE,*pNODE;
void link_init_head(pNODE *pphead);
void show(pNODE phead);
void link_back(pNODE *phead);
void link_add(pNODE *phead,pNODE *phead2);
#endif