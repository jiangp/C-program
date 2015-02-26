#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//第一题
/*//strlen()
int main()
{
	char arr[10]={"hello"};
	//char arr1[10]={"world"};
	int i,j=0;
	for(i=0;arr[i]!='\0';i++)
	{
		j++;

	}
	printf("%d",j);
    system("pause");
    return 0;
}
*//*
//strcpy
int main()
{
	char arr[10]={"hellosdaf"};
	char arr1[10]={"world"};
	int i,j=0;
	for(i=0;arr1[i]!='\0';i++)
	{
		arr[i]=arr1[i];

	}
	for(j=i;j<sizeof(arr);j++)
	{
	   arr[i]='\0';
	}
   // strcpy(arr,arr1);
	printf("%s\n",arr);
    system("pause");
    return 0;
}
*//*

//strcat
int main()
{
	char arr[10]={"hello"};
	char arr1[10]={"world"};
	char arr2[20]={0};
	int i,j=0;
	for(i=0;i<20;i++)
	{
		if(arr[i]!='\0'&&i<sizeof(arr))
		{
			arr2[i]=arr[i];
			j++;
		}else
		{
			arr2[i]=arr1[i-j];
		}
		
	}
 // printf ("%d",strcmp(arr,arr1));
	printf("%s\n",arr2);
    system("pause");
    return 0;
}
*/
/*
//strcmp
int main()
{
	char arr[10]={"hello"};
	char arr1[10]={"hello"};
	int i,j=0;
	for(i=0;i<10;i++)
	{
		if(arr[i]>arr1[i])
		{
			printf("1"); 
			break;
		}else if(arr[i]<arr1[i])
		{
			printf("-1");
				break;
		}else
			if(i==9)
			  printf("0");
	}
 // printf ("%d",strcmp(arr,arr1));
	//printf("%s\n",arr);
    system("pause");
    return 0;
}
*/
   


/*
int main()
{
////////////////////////////////////////

char arr1[1024];
int i;
gets(arr1);
i=strlen(arr1);
//printf("%d",i);
//strcpy(arr2,arr1);
//i=strcmp(arr1,arr2);
//strcat(arr1,arr2);
printf("%d",i);
//printf("%s",arr1);
system("pause");
return 0;
}

*//*
//第二题
int main()
{
	char arr[10]={"12ell2o3"};
	int i,bg,k=0,t=0;
	for(i=0;i<10;i++)
	{   
		if(arr[i]>=65&&arr[i]<92||arr[i]>=97&&arr[i]<=123)
			continue;
		if(arr[i]>=48&&arr[i]<=58)
		{	
			bg=arr[i];
			for(k =i-1; k>=t; k--)
			{
				arr[k+1 ] = arr[k] ;
			}
			arr[t]=bg;
			t++;
		}
	}
	printf("%s",arr);
	system("pause");
	return 0;
}
*//*

//第三题
int main()
{
	char arr[100]={"hello world how    "};
	char arr1[10]={"%020"};
	int i,j=0,m;
	//printf("%d",strlen(arr));
	for(i=0;i!=100;i++)
	{
		if(arr[i]==' ')
		{ 
			m=0;
			arr[i]=arr1[m];
			for(m=1;m<4;m++)
			{
				
				for(j=strlen(arr);j>i; j--)
			   {
				   arr[j+1 ] = arr[j];
			   }
				//printf("%d/n",strlen(arr));
			    arr[i+1]=arr1[m];
			    i++;
			   
			}
		}
	}
	printf("%s",arr);
	system("pause");
	return 0;
}
*//*

//第四题
int main()
{
	char arr[20]={"asddafghaghaghk  "};
	int i,j;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='a')
		{
			for(j=i;arr[j]!='\0';j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
	printf("%s",arr);
	system("pause");
	return 0;
}
*/

/*//第五题
int main()
{
	char arr[80]={"i am a student"};
	char arr1[80];
	int i,j,index_;
	int bg,end;
	for(i=0;i<79;i++)
		arr1[i]=arr[78-i];
    arr1[79]=arr[79];
	for(i=0;i<80;i++)
	{
		if(arr1[i]!=0)
		{
			while(arr1[i]==' ')
		  {
			i++;
		  }
		  if(arr1[i] == '\0')
		  {
			break ;}
		  bg=i;
		   while(!(arr1[i+1]==' '&&arr1[i]!=' '||arr1[i+1]=='\0'&&arr1[i]!=' '))
		   {
			i++;
			
		   }
	 
		   end=i;
		   i++;
	      for(index_=end;index_>=bg;index_--)
	       { 
		      printf("%c",arr1[index_]);
	       }
		  printf(" ");
		}
	}


	//printf("%s",arr);
	system("pause");
	return 0;
}*/

/*//第六题
int main()
{

	char arr[10]={"-12345"};
	int i,k=0;
	if(arr[0]=='-')
	{
		for(i=1;i<strlen(arr);i++)
		{
			k=k*10+(arr[i]-48);
		}
		k=-k;
	}else
	{
		for(i=0;i<strlen(arr);i++)
		{
			k=k*10+(arr[i]-48);
		}
	}
	printf("%d",k);
	system("pause");
	return 0;

}*/


/*
//蛇形矩阵
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9,}};
	int i=0,j,k,bg;
	for(i=0;i<3;i++)
	{
		if(i%2!=0)
		{
			k=sizeof(arr[i])/sizeof(int)-1;
			//printf("%d\n",k);
			for(j=0;j<=k;j++)
			{
				bg=arr[i][j];
				arr[i][j]=arr[i][k-j];
				arr[i][k-j]=bg;
				if(j==k-j||(k-j-j)==1)
					break;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	// printf ("%d",strcmp(arr,arr1));
	//printf("%s\n",arr2);
	system("pause");
	return 0;
}
*/


/*

//第八题
int main()
{
	int arr[20]={1,2,2,2,3,3,3,4,4,5,5,5,5,6,6,6,6,6,7};
	int arr1[20];
	int i,j,k=0;
	//for(j=0j!='\0'j++)
	for(i=0;i!=20; i++)
	{
		for(j=i;j!=20;j++)
		{
		  if(arr[i]!=arr[j+1])
		  {
		   arr1[k]=arr[i];
		   k++;
		   i=j;
		   break;
		  }		 
		}
	}
	for(i=0;i<k-1;i++)
	{
	  printf("%d\n",arr1[i]);
	}
	system("pause");
	return 0;
}*/

/*
//第九题
int main()
{
	char arr[80]={"I    am  a     surper  man   "};
	int i=0;
	int bg,end;
	//char *p=arr;
	while(arr[i]!='\0')
	{
		while(arr[i]==' ')
		{
			i++;
		   // *p++;
		}
		//if(arr[i+1]=='\0')
			//break;
		bg=i;
		while(!((arr[i]!=' '&&arr[i+1]==' ')||(arr[i+1]=='\0'&&arr[i]!=' ')))
		{
			i++;
		}
		end=i;
		i++;
		if(arr[i+1]!='\0')
	    {
		   while(bg<=end)
		    {			
			printf("%c",arr[bg]);
			bg++;			
			}
		   printf(" ");
		}else
		{
			while(bg<=end)
		    {			
			printf("%c\n",arr[bg]);
			bg++;
			break;
			}
		}
	}		
	system("pause");
	return 0;
}*/

