//------- Show all the list -----//
#include "student.h"
void show(struct st *ptr)
{
    if(ptr!=0)
    {
    printf("\n");
    printf("\t\t+---------------+---------------+---------------+\n");
    printf("\t\t|               STUDENT RECORD                  |\n");
    printf("\t\t+---------------+---------------+---------------+\n");
    printf("\t\t| ROLL NUMBER   | NAME          | MARK          |\n");
    printf("\t\t+---------------+---------------+---------------+\n");
    while(ptr != 0)
    {
        printf("\t\t| %-13d | %-13s | %-13.2f |\n",ptr->roll,ptr->name,ptr->mark);
        ptr = ptr->next;
    }

    printf("\t\t+---------------+---------------+---------------+\n");
    }
    else
	    printf("\t\tTHERE IS NO RECORDS OF THE STUDENTS\n");
}
