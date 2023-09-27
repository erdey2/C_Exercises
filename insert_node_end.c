#include <stdio.h>
#include <stdlib.h>
typedef struct smark
{
    int mark;
    struct smark *next;
}Smark;
Smark *insert_at_end(Smark **head, int mark)
{
    Smark *current, *temp;
    temp = malloc(sizeof(Smark));
    
    if (temp != NULL)
    {
        printf("Memory is successfuly allocated\n");
        temp->mark = mark;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            current = *head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = temp;
        }
    }
    else
    {
        printf("Memory Allocation is not successful\n");
    }
    return temp;
    
}
int main() 
{
    Smark *head;
    //head = NULL;
    insert_at_end(&head, 90);
    insert_at_end(&head, 76);
    while (head != NULL)
    {
        printf("%d \n", head->mark);
        //printf("%p", head->next);
        head = head->next;
    }
    return 0;
}
