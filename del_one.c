//----------------Delete one node or record--------//
#include"student.h"
void del_one(struct st **ptr)
{
	char dop,dc,dname[20];
	int drol,dnr;
	struct st *temp,*prev;
	printf("\n");
	printf("\t\t+---------------------------------------+\t\t\n");
	printf("\t\t|     CHOOSE THE OPTION TO DELETE       |\t\t\n");
	printf("\t\t+---------------------------------------|\t\t\n");
	printf("\t\t|   R/r  :  Enter roll.no to delete     |\t\t\n");
	printf("\t\t|   N/n  :  Enter Name to delete        |\t\t\n");
	printf("\t\t+---------------------------------------+\t\t\n");
	printf("\n");
	printf("\tEnter the choice : ");
	scanf(" %c",&dop);
	switch(dop|32)
	{
		case 'r': printf("Enter roll.no to delete : ");
			  scanf("%d",&drol);
			  temp=*ptr;
			  while(temp!=0)
			  {
				  if(temp->roll==drol)
				  {
					  printf("\t\t+---------------+---------------+---------------+\n");
					  printf("\t\t|     CONFIRM THE STUDENT RECORD TO DELETE      |\n");
					  printf("\t\t+---------------+---------------+---------------+\n");
					  printf("\t\t| %-13d | %-13s | %-13.2f |\n",temp->roll,temp->name,temp->mark);
					  printf("\t\t+---------------+---------------+---------------+\n");
					  printf("\n\t\tDO YOU WANT TO DELETE THIS STUDENT RECORD : ");
					  scanf(" %c",&dc);
					  if(dc=='y')
					  {
						  if(temp==*ptr)
							  *ptr=temp->next;
						  else
							  prev->next=temp->next;
						  free(temp);
						  return;
					  }
					  else
						  printf("\t\tDELETE OPERATION IS CANCELED\n");
				  }
				  else
				  {
					  prev=temp;
					  temp=temp->next;
				  }
			  }
			  if(temp==0)
				  printf("\t\tTHERE IS NO STUDENT ID IS MATCHED\n");
			  break;
		case 'n': printf("Enter Name to delete : ");
			  scanf("%s",dname);
			  temp=*ptr;
			  printf("\t\t+---------------+---------------+---------------+\n");
			  printf("\t\t|     CONFIRM THE STUDENT RECORD TO DELETE      |\n");
			  printf("\t\t+---------------+---------------+---------------+\n");
			  while(temp!=0)
			  {
				  if(strcmp(temp->name, dname) == 0)
				  {

					  printf("\t\t| %-13d | %-13s | %-13.2f |\n",temp->roll,temp->name,temp->mark);
				  }
				  temp=temp->next;
			  }
			  printf("\t\t+---------------+---------------+---------------+\n");
			  printf("\nENTER THE ROLL.NO TO DELETE THE PARTICULAR STUDENT RECORD : \n");
			  scanf("%d",&dnr);
			  temp=*ptr;
			  while(temp!=0)
			  {
				  if(temp->roll==dnr)
				  {
					  if(temp==*ptr)
						  *ptr=temp->next;
					  else
						  prev->next=temp->next;
					  free(temp);
					  return;
				  }
				  else
				  {
					  prev=temp;
					  temp=temp->next;
				  }
			  }
			  if(temp==0)
				  printf("\n\t\tTHERE IS NO STUDENT ID IS MATCHED\n");	 

			  break;
	}

}


