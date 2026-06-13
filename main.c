#include"student.h"
int id=0;
int main()
{
	struct st *hptr=0;
	char ch,w;
	load(&hptr);
	if(hptr!=0)
	{
	struct st *last=hptr;
	while(last->next!=0)
		last=last->next;
	id=last->roll;
	}
	while(1){
	printf("\n");
	printf("\t\t+-------------------------------------+\t\t\n");
	printf("\t\t|        STUDENT RECORD MENU          |\t\t\n");
	printf("\t\t+-------------------------------------+\t\t\n");
	printf("\t\t|    A/a    : Add New Record          |\t\t\n");
	printf("\t\t|    D/d    : Delete A Record         |\t\t\n");
	printf("\t\t|    S/s    : Show the list           |\t\t\n");
	printf("\t\t|    M/m    : Modify the record       |\t\t\n");
	printf("\t\t|    V/v    : Save                    |\t\t\n");
	printf("\t\t|    E/e    : Exit                    |\t\t\n");
	printf("\t\t|    T/t    : Sort the list           |\t\t\n");
	printf("\t\t|    L/l    : Delete All records      |\t\t\n");
	printf("\t\t|    R/r    : Reverse the list        |\t\t\n");
	printf("\t\t+-------------------------------------+\t\t\n\n");

	printf("Choose the option in the menu : ");
	scanf(" %c",&ch);
	switch(ch|32)
	{
		case 'a': add_new(&hptr);
			  printf("\nTHE NEW STUDENT DETAIL IS ADDED IN THE LIST\n");
                          while(getchar() != '\n'); 
                          getchar();                 
			  system("clear");
			  break;
		case 'd': del_one(&hptr);
			  printf("\nTHIS PARTICULAR STUDENT DETAIL IS DELETED\n");
                          while(getchar() != '\n'); 
                          getchar();                 
			  system("clear");
			  break;
		case 's': printf("\nTHESE IS STUDENTS LIST\n"); 
                          show(hptr);
			  printf("\nPress Enter to ENTER THE STUDENT RECORD MENU\n");
                          while(getchar() != '\n'); 
                          getchar();                 
                          system("clear");
			  break;
		case 'm': modify(hptr);
			  printf("\nSTUDENT DETAIL IS MODIFIED\n");
                          while(getchar() != '\n'); 
                          getchar();                 
			  system("clear");
			  break; 
		case 'v': save(hptr);
			  printf("\nALL THE STUDENT DETAILS ARE SAVED\n");
                          while(getchar() != '\n'); 
                          getchar();                 
			  system("clear");
			  break; 
		case 'e': exit_std(hptr);
			  printf("\nEXIT FROM THE STUDENT RECORD\n");
			  system("clear");
			  return 0;
		case 't': sort(hptr);
			  printf("\nTHE STUDENT RECORDS ARE SORTED\n");
                          while(getchar() != '\n'); 
                          getchar();                 
			  system("clear");
			  break;
		case 'l': del_all(&hptr);
			  printf("\nALL THE STUDENT RECORDS ARE DELETED\n");
			  sleep(3);
			  system("clear");
			  break;
		case 'r': reverse(hptr);
			  printf("\nALL THE STUDENT RECORDS ARE REVERSED\n");
                          while(getchar() != '\n'); 
                          getchar();                 
			  system("clear");
			  break;
	}
	}
}
