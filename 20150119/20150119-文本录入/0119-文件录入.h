#ifndef _FUNC_
#define _FUNC_
#define add "D:\\yawen.txt"
#define add1 "D:\\yawen1.txt"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>


  typedef struct student
  {
	  int m_num;
	  char m_name[32];
	  char m_sex;
	  int m_scores[5];
	  struct student *m_next;
  }STU,*pSTU;

void link_init_from_file(char* file_name, pSTU *phead);
void link_input_to_file(char *file_name,pSTU phead);
#endif