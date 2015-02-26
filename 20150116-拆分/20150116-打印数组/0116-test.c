#include"0116-´òÓ¡Êı×é.h"
int main()
{
	char arr[30];
	char arr1[10];
	char arr2[10];
    printf("please input string for arr:\n");
	gets(arr);
	printf("please input string for arr1:\n");
	gets(arr1);
	printf("please input string for arr2:\n");
	gets(arr2);
	rep(arr,arr1,arr2);
	
	//rep(arr,arr1,arr2);
	system("pause");
	return 0;
}