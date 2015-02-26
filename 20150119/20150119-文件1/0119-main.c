#include"0119-lianb.h"
int main()
{
	pNODE phead=NULL,phead2=NULL;
	link_init_head(&phead);
	show(phead);
	link_init_head(&phead2);
	show(phead2);
	link_back(&phead);
	link_back(&phead2);
	show(phead);
	show(phead2);
	link_add(&phead,&phead2);
	show(phead);
	system("pause");
	return 0;
}