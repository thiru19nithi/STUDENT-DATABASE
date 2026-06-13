//------------- reverse the list -----------//
#include"student.h"
int count_fun(struct st *);
void reverse(struct st *ptr)
{
	struct st *temp=copy_list(ptr);
	struct st *head = temp;
	int i,count,j;
	count=count_fun(ptr);
	struct st **p;
	p=(struct st **)malloc(count*sizeof(struct st *));
	for(i=0;i<count;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	struct st temp1;
	int size=sizeof(struct st)-8;
	for(i=0,j=count-1;i<j;i++,j--)
	{
		memcpy(&temp1,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp1,size);
	}
	show(head);
}
int count_fun(struct st *ptr)
{
	int c=0;
	while(ptr!=0)
	{
		ptr=ptr->next;
		c++;
	}
	return c;
}
