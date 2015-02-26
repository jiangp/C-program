#include"0116-func.h"
int main()
{
	STU as[10];
	a_init(as,10);
	a_show(as,10);
	qsort(as,10,sizeof(STU),&a_cmp);
	printf("------------------------------------------\n");
	a_show(as,10);
	system("pause");
	return 0;
}