#include"student.h"
void modify(struct st *ptr)
{
	char mop,mc,mrc,mname[20];
	int mrol,mnr,mmark;
	struct st *temp;
	printf("\n");
	printf("\t\t+---------------------------------------+\t\t\n");
	printf("\t\t|     CHOOSE THE OPTION TO MODIFY       |\t\t\n");
	printf("\t\t+---------------------------------------|\t\t\n");
	printf("\t\t|   R/r  :  Enter roll.no to modify     |\t\t\n");
	printf("\t\t|   N/n  :  Enter Name to modify        |\t\t\n");
	printf("\t\t+---------------------------------------+\t\t\n");
	printf("\n");
	printf("\tEnter the choice : ");
	scanf(" %c",&mop);
	switch(mop|32)
	{
		case 'r': printf("Enter roll.no to modify the detials : ");
			  scanf("%d",&mrol);
			  temp=ptr;
			  while(temp!=0)
			  {
				  if(temp->roll==mrol)
				  {
					  printf("\t\t+---------------+---------------+---------------+\n");
					  printf("\t\t|     CONFIRM THE STUDENT RECORD TO MODIFY      |\n");
					  printf("\t\t+---------------+---------------+---------------+\n");
					  printf("\t\t| %-13d | %-13s | %-13.2f |\n",temp->roll,temp->name,temp->mark);
					  printf("\t\t+---------------+---------------+---------------+\n");
					  printf("\n\t\tDO YOU WANT TO MODIFY THIS STUDENT RECORD : ");
					  scanf(" %c",&mc);
					  if(mc=='y')
					  {
						  printf("\t\t+-------------------------------------+\n");
						  printf("\t\t|   ENTER WHICH RECORD TO MODIFY      |\n");
						  printf("\t\t+-------------------------------------+\n");
						  printf("\t\t|             N/n : NAME              |\n");
						  printf("\t\t|             M/m : MARK              |\n");
						  printf("\t\t+-------------------------------------+\n");
						  printf("\nENTER THE OPTION TO MODIFY : ");
						  scanf(" %c",&mrc);
						  switch(mrc|32)
						  {
							  case 'n': printf("\nENTER THE NEW NAME : ");
								    scanf("%s",mname);
								    strcpy(temp->name,mname);
								    break;
							  case 'm': printf("\nENTER THE NEW MARK : ");
								    scanf("%d",&mmark);
								    temp->mark=mmark;
								    break;
						  }
						  return;
					  }
				  }
				  else
				  {
					  temp=temp->next;
				  }
				 }
			  if(temp==0)
				  printf("\n\tROLL.NO DOES NOT MATCHED\n");
			  else
				 printf("\n DETAILS MODIFIED\n"); 
			  break;
	
		case 'n': printf("Enter Name to modify : ");
			  scanf("%s",mname);
			  temp=ptr;
			  printf("\t\t+---------------+---------------+---------------+\n");
			  printf("\t\t|     CONFIRM THE STUDENT RECORD TO MODIFY      |\n");
			  printf("\t\t+---------------+---------------+---------------+\n");
			  while(temp!=0)
			  {
				  if(strcmp(temp->name, mname) == 0)
				  {

					  printf("\t\t| %-13d | %-13s | %-13.2f |\n",temp->roll,temp->name,temp->mark);
				  }
				  temp=temp->next;
			  }
			  printf("\t\t+---------------+---------------+---------------+\n");
			  printf("\nENTER THE ROLL.NO TO MODIFY THE PARTICULAR STUDENT RECORD : \n");
			  scanf("%d",&mnr);
			  temp=ptr;
                          while(temp!=0)
                          {
                                  if(temp->roll==mnr)
                                  {
                                          printf("\t\t+---------------+---------------+---------------+\n");
                                          printf("\t\t|     CONFIRM THE STUDENT RECORD TO MODIFY      |\n");
                                          printf("\t\t+---------------+---------------+---------------+\n");
                                          printf("\t\t| %-13d | %-13s | %-13.2f |\n",temp->roll,temp->name,temp->mark);
                                          printf("\t\t+---------------+---------------+---------------+\n");
                                          printf("\n\t\tDO YOU WANT TO MODIFY THIS STUDENT RECORD : ");
                                          scanf(" %c",&mc);
                                          if(mc=='y')
                                          {
                                                  printf("\t\t+-------------------------------------+\n");
                                                  printf("\t\t|   ENTER WHICH RECORD TO MODIFY      |\n");
                                                  printf("\t\t+-------------------------------------+\n");
                                                  printf("\t\t|             N/n : NAME              |\n");
                                                  printf("\t\t|             M/m : MARK              |\n");
                                                  printf("\t\t+-------------------------------------+\n");
                                                  printf("\nENTER THE OPTION TO MODIFY : ");
                                                  scanf(" %c",&mrc);
                                                  switch(mrc|32)
                                                  {
                                                          case 'n': printf("\nENTER THE NEW NAME : ");
                                                                    scanf("%s",mname);
                                                                    strcpy(temp->name,mname);
                                                                    break;
                                                          case 'm': printf("\nENTER THE NEW MARK : ");
                                                                    scanf("%d",&mmark);
								    temp->mark=mmark;
								    break;
					          }
                                                  return;
                                          }
                                  }
                                  else
                                  
                                          temp=temp->next;
                                  
                                 }


			  if(temp==0)
				  printf("\n\t\tTHERE IS NO STUDENT ID IS MATCHED\n");	 

			  break;
	}

}
