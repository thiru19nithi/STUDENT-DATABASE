//--------Add a new node -------///
#include"student.h"
void add_new(struct st **ptr)
{
	struct st *temp;
	temp=(struct st *)malloc(sizeof(struct st));
	printf("enter the strudent details\n");
	printf("\tenter the name of student : ");
	scanf("%s",temp->name);
	printf("\n\tenter the mark of a student : ");
	scanf("%f",&temp->mark);
	temp->roll=++id;
	temp->next=0;
	if(*ptr==0)
		*ptr=temp;
	else
	{
		struct st *last=*ptr;
		while (last->next!=0)
			last=last->next;
		last->next=temp;
	}
}

