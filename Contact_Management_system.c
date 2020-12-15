#include <stdio.h>
#include<stdlib.h>

struct phonebook
{
    char first_name[20];
    char last_name[20];
    long int ph_no;
    struct phonebook *next;
};

int create_node(struct phonebook **fhead, struct phonebook **flast );
int display(struct phonebook **fhead, struct phonebook **flast);

int main(void)
{
    struct phonebook *head = NULL;
    struct phonebook *last = NULL;
    struct phonebook *newnode = NULL;
    int choice = 0, success = 0;
    
    printf("\n-----------MENU----------");
    printf("\n1.Add contact to phonebook");
    printf("\n2.Display all contacts in phonebook");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1: 
        success = create_node(&head , &last);
        if(success == 0)
        {
            printf("Contact could not be saved as memory could not be allocated.");
        }
        else
        {
            printf("Contact was saved!");
        }
        break;
        
        //case 2:
        
    }

    return 0;
}

int create_node(struct phonebook **fhead, struct phonebook **flast)
{
    struct phonebook *head = NULL;
    struct phonebook *last = NULL;
    struct phonebook *newnode = NULL;
    int success = 0;
    
    head = *fhead;
    last = *flast;
    
    newnode = (struct phonebook *)calloc(1, sizeof(struct phonebook));
    if(newnode == NULL)
    {
        success = 0;
    }
    else
    {
        success = 1;
        printf("\n\tEnter First Name: ");
        scanf("%19s", newnode->first_name);
        
        printf("\n\tEnter Last Name: ");
        scanf("%19s", newnode->last_name);
        
        printf("\n\tEnter Phone No: ");
        scanf("%ld", &newnode->ph_no);
        if(head == NULL)
        {
            head = newnode;
            last = newnode;
        }
        else
        {
            last->next = newnode;
            newnode->next = NULL;
        }
        
    }
    *fhead = head;
    *flast = last;
    return success;
}

int display(struct phonebook **fhead, struct phonebook **flast)
{
    struct phonebook *head = NULL;
    struct phonebook *last = NULL;
    struct phonebook *temp = NULL;
    int success = 0;
    head = *fhead;
    last = *flast;
    
    temp = head;
    while(temp->next != NULL)
    {
        
    }
    
}
