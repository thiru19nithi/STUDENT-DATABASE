//--------- delete all records ---------//
#include"student.h"
void del_all(struct st **ptr)
{
	struct st *temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
	printf("\tALL RECORDS ARE DELETED \n");
}
