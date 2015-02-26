#include"0119-ÎÄ¼şÂ¼Èë.h"
int main(int argc,char* argv[])
{
	pSTU head=NULL;

	link_init_from_file(add,&head);

	link_input_to_file(add1,head);

	head=NULL;
	system("pause");
	return 0;
}