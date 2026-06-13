#include"student.h"
struct st *copy_list(struct st *head)
{
    struct st *temp;
    struct st *newnode;
    struct st *newhead = NULL;
    struct st *last = NULL;

    for(temp = head; temp != NULL; temp = temp->next)
    {
        newnode = malloc(sizeof(struct st));

        if(newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return NULL;
        }

        memcpy(newnode, temp, sizeof(struct st));

        /* Don't copy the old link */
        newnode->next = NULL;

        if(newhead == NULL)
        {
            newhead = newnode;
            last = newnode;
        }
        else
        {
            last->next = newnode;
            last = newnode;
        }
    }

    return newhead;
}
