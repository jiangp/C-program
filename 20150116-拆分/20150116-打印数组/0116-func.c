#include"0116-´òÓ¡Êı×é.h"
void  rep(char *s,char *s1,char *s2)
{
	int i,j;
	for(i=0;i<strlen(s);i++)
	{
		for(j=0;j<strlen(s1);j++)
		{
		  if(s[i]==s1[j])
		   {
			s[i]=s2[j];
			   break;
		   }
		}
			
	}
	//printf("%d",strlen(arr));
	printf("The string of after display is:\n");
	
	for(i=0;i<strlen(s);i++)
	{
     	printf("%c",s[i]);
	}
	printf("\n");

}