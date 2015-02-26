#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	char str1[100],str2[100];	
	int sum=0,i,word=0,j=0;
	gets(str1);
	////////////////////////////////////////////////////
	//统计单词个数（Y）
		for(i=0;str1[i]!='\0';i++)
		{
			if(str1[i]==' ')
				word=0;
			else if(word==0)
				{
					word=1;
		         	sum++;
			     }

		}/*
	////////////////////////////////////////////////////////
	//字符串反转（X）
    for(i=99;i>=0;i--)
	{
	str2[j++]=str1[i];
				
	}*/
	printf("%d\n",sum);
	system("pause");
	return 0;
}
//////////////////////////////////////
//字符串中某个字母大小写变换（N）

	//strupr(ch);
    //system("pause");
	//return 0;
//}