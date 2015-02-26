#include"0119-ÎÄ¼şÂ¼Èë.h"
void trim_space(char *src)
{
	int fast_index, last_index ;
	for(fast_index = 0, last_index = -1 ; src[fast_index] != 0 ;fast_index ++)
	{
		if(!isspace(src[fast_index]))
		{
			src[++last_index] = src[fast_index];
		}else 
		{
			if(last_index != -1 && !isspace(src[last_index]) )
			{
				src[++last_index] =' ';
			}
		}
	}
	src[++last_index] = 0; 
	
}

int stu_sum(int *arr,int len)
{
	int sum=0;
	int i;
	for(i=0;i<len;i++)
	{
	   sum=sum+arr[i];
	}
	return sum;
}

void link_init_from_file(char *file_name,pSTU *phead)
{
	FILE *fp=fopen(file_name,"r");
	pSTU pnew,pcur,ppre;
	char line[1024];
	if(fp==NULL)
	{
		printf("fail\n");
		return ;
	}
	while(memset(line,0,sizeof(line)),fgets(line,1024,fp)!=NULL)
	{
		trim_space(line);
		if(line[0]==0)
		{
			continue;
		}
		pnew=(pSTU)calloc(1,sizeof(STU));
		sscanf(line,"%d %s %c %d %d %d %d %d %d",&pnew->m_num,pnew->m_name,&pnew->m_sex,&pnew->m_scores[0],&pnew->m_scores[1],&pnew->m_scores[2],&pnew->m_scores[3],&pnew->m_scores[4]);
		pcur=*phead;
		
		ppre=NULL;
		while(pcur&&stu_sum(pcur->m_scores,5)<stu_sum(pnew->m_scores,5))
		{
			ppre=pcur;
			pcur=pcur->m_next;
		}
		if(ppre==NULL)
		{
			pnew->m_next=*phead;
			*phead=pnew;
		}else
		{
			pnew->m_next=pcur;
			ppre->m_next=pnew;
			
		}
	}
	fclose(fp);

}
void link_input_to_file(char *dest,pSTU phead)
{
	
	FILE *fp_write=fopen(dest,"w");
	char buf[1024];
	pSTU pcur=phead,temp;
	if(fp_write==NULL)
	{
		printf("write fail\n");
		return;
	}
	
	while(pcur)
	{
        memset(buf,0,sizeof(buf));
		sprintf(buf, "%-3d%-10s%-3c%4d%4d%4d%4d%4d\n",pcur->m_num,pcur->m_name,pcur->m_sex,pcur->m_scores[0],pcur->m_scores[1],pcur->m_scores[2],pcur->m_scores[3],pcur->m_scores[4]);
		puts(buf);
		fputs(buf,fp_write);
		
		temp=pcur;
		pcur=pcur->m_next;
		free(temp);

	}
	fclose(fp_write);
}