/*
  ��ջʵ�ֳ�ʼ��������ջ��Ԫ�أ�ɾ��ջ��Ԫ�أ�����ջ�����ջ�Ȼ�������
  */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define true 1
#define false 0


typedef struct Node
{
    int data;
    struct Node *pNext;
}NODE, *PNODE;

typedef struct Stack
{
    PNODE pTop;
    PNODE pBottom;
}STACK, *PSTACK;

void init(PSTACK pS);
void push(PSTACK pS, int val);
void traverse(PSTACK pS);
int pop(PSTACK pS , int *val);
void clear(PSTACK pS);
int empty(PSTACK pS);

int main(void)
{
    STACK S ;
    int val;
//    int i;
    
    init(&S);
    
    push(&S,1);
    push(&S,2);
    push(&S,3);
    push(&S,4);
    push(&S,5);
    push(&S,6);

    traverse(&S);
    
    if(pop(&S ,&val))
    {
        printf("�����ɹ�����ջԪ��Ϊ%d\n",val);
    }
    else
    {
        printf("��ջʧ�ܣ�\n");
    }
    traverse(&S);

    clear(&S);
    
    traverse(&S);
    system("pause");
    return 0 ;
}

//ջ�ĳ�ʼ��
void init(PSTACK pS)
{
    pS -> pTop = (PNODE)malloc(sizeof(NODE));
    
    if(NULL == pS -> pTop)
    {
        printf("��̬�ڴ����ʧ�ܣ�");
        exit(-1);
    }
    else
    {
        pS -> pBottom = pS -> pTop;
        pS -> pTop -> pNext = NULL;
    }
    
    return ;
}

//����Ԫ�ص�ջ��
void push(PSTACK pS , int val)
{
    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    
    pNew -> data = val;
    pNew -> pNext = pS -> pTop;
    pS -> pTop = pNew;
    
    return ;
}

//����ջS
void traverse(PSTACK pS)
{
    PNODE p = pS -> pTop;
    
    printf("ջ��Ԫ��Ϊ��");
    while(p != pS -> pBottom)
    {
        printf("%d\t", p -> data);
        p = p -> pNext;
    }
    
    printf("\n");
    return ;
}

//�ж�ջ�Ƿ�Ϊ��
int empty(PSTACK pS)
{
    if(pS -> pTop == pS -> pBottom)
    {
        return true;
    }
    else
        return false;
}

//ɾ��ջ��Ԫ�ز�����ֵ����*val
int pop(PSTACK pS , int *val)
{
    if(empty(pS))
    {
        return false;
    }
    else
    {
        PNODE r = pS -> pTop;
        *val = r -> data;
        pS -> pTop = r -> pNext;
        free(r);
        r = NULL;
        return true; 
	}
}

//���ջS
void clear(PSTACK pS)
{
    if(empty(pS))
    {
        return;
    }
    else
    {
        PNODE p = pS -> pTop;
        PNODE q = NULL;
        
        while(p != pS -> pBottom)
        {
            q = p -> pNext;
            free(p);
            p = q ;
        }
        
        pS -> pTop = pS -> pBottom;
        
        return;
    }
}