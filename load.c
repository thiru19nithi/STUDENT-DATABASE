#include"student.h"
void load(struct st **ptr)
{
	struct st temp; 
	FILE *fp=fopen("single_end.txt","r");
	if(fp==NULL){
		return;
	}
	while(fscanf(fp,"%d %s %f",&temp.roll,temp.name,&temp.mark)==3)
	{
		struct st *new;
		new=(struct st *)malloc(sizeof(struct st));
		*new=temp;
		new->next=0;
		if(*ptr==0)
			*ptr=new;
		else
		{
			struct st *last = *ptr;
			while(last->next!=0)
				last=last->next;
			last->next=new;
		}
	}
	fclose(fp);
}
