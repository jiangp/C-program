#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int* array_init(int len);
////////////////////////////////////////////////////
char** str_init(int len);// char* arr[len]
void foreach_str(char** bg, char** end, char*(*handle)());
char* str_asign();
void str_show(char** arr, int len);
int str_less(const void* left, const void* right);a
///////////////////////////////////////////////////
void for_each(int* bg, int* end, void(*handle)(int*));
void array_destroy(int* arr);
void visit(int* pval);
int my_less(const void* left, const void* right);
int my_great(const void*  left, const void* right);
void init(int* pval);
///////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	int arr_len ;
	char** str ;
	srand(time(NULL));//��������������һ����srand�����������ڵ���rand�����������֮ǰʹ�õģ�rand������һ������������ĺ�������srand��һ��������������ӵĺ�����ͨ��������������һ��ʹ�õģ�����ɲ���������Ĺ��ܣ�
//////////////////////��time(NULL)��������ķ���ֵ����Ϊsrand�����Ĳ����ģ���˼�������ڵ�ϵͳʱ����Ϊ����������������������������NULL���������ֻ�����ó�NULL���ܻ��ϵͳ��ʱ�䣡
	arr_len = rand()%10 + 1 ;
	str = str_init(arr_len);//
	foreach_str(str, str + arr_len - 1, &str_asign);
	str_show(str, arr_len);
	printf("\n");
	qsort(str,arr_len, sizeof(char*), &str_less);

	str_show(str, arr_len);
	printf("\n");
	/*
	int arr_len ;
	int *arr ;
	srand(time(NULL));
	arr_len = rand()% 20 + 1 ;
	arr = array_init(arr_len);
	for_each(arr, arr + arr_len - 1, &init);
	for_each(arr, arr + arr_len - 1, &visit);
	printf("\n");
	qsort((void*)arr, arr_len, sizeof(int),&my_less);
	for_each(arr, arr + arr_len - 1, &visit);
	printf("\n");*/
	system("pause");
	return 0 ;
}
int* array_init(int len)
{
	int *arr = (int*)calloc(len, sizeof(int)) ;
	
	return arr;
}

void array_destroy(int* arr)
{
	free(arr);
}
void for_each(int* bg, int* end, void(*handle)(int*))
{
	for( ; bg <= end ; bg ++ )
	{
		(*handle)(bg);
	}
}
void visit(int* pval)
{
	printf("%d ", *pval);
}
void init(int* pval)
{
	*pval = rand()%1000;
}

int my_less(const void* left, const void* right)
{
	int* pleft = (int*)left ;
	int* pright = (int*)right;
	if(*pleft < *pright)
	{
		return -1 ;
	}else if(*pleft == *pright)
	{
		return 0 ;
	}else
	{
		return 1 ;
	}
	
}

int my_great(const void* left, const void* right)
{
	int* pleft = (int*)left ;
	int* pright = (int*)right;
	if(*pleft > *pright)
	{
		return 1 ;
	}
	return 0 ;
}
char** str_init(int len)
{
	char** arr = (char**)calloc(len, sizeof(char*)) ;
	
	return arr;
}
void foreach_str(char** bg, char** end, char*(*handle)())//char* arr[10]
{
	for(; bg <= end; bg ++)
	{
		*bg = (*handle)();
	}
}

char* str_asign()
{
	int str_len = rand()%10 + 1;
	int i ;
	char* pstr = (char*)calloc(str_len + 1, sizeof(char)) ;
	for(i = 0; i < str_len; i ++)
	{
		if(rand() % 2 == 0)
		{
			pstr[i] = 'a' + rand()%26 ;
		}else 
		{
			pstr[i] = 'A' + rand()%26 ;
		}
	}
	pstr[i] = '\0' ;
	return pstr ;
}
int str_less(const void* left, const void* right)
{
	char** pleft = (char**)left;
	char** pright = (char**)right;
	if(strcmp(*pleft, *pright) < 0)
	{
		return -1 ;
	}else  if(strcmp(*pleft, *pright) == 0)
	{
		return 0 ;
	}else 
	{
		return 1 ;
	}
}
void str_show(char** arr, int len)
{
	int i ;
	for(i = 0; i < len; i ++)
	{
		printf("[%d]: %s\n", i, arr[i]);
	}
}