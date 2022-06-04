#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp,*prevnode;
void create();
void insert();
void insert_atbeg();
void delete_fromend();
void traverse_forward();
void display();
void count();

int main()
{
	int choice;
    char ch = 'Y';
    while (ch == 'Y'||ch == 'y')
	{
        printf("\n---------------------------------\n");
        printf("\nOperations on singly linked list\n");
        printf("\n---------------------------------\n");
        printf("\n1.Create a linked list");
        printf("\n2.Insert at beginning");
        printf("\n3.Delete from end");
        printf("\n4.Travel forward");
        printf("\n5.Display List");
        printf("\n6.Exit\n");
        printf("\n~~~\n");
        printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
            case 2:
				insert_atbeg();
				break;
            case 3:
				delete_fromend();
				break;
            case 4:
				traverse_forward();
				break;
            case 5: 
                display();
                break;	
			case 6:
				printf("\nExit\n");
                return 0;
				break;
            default: 
            printf("\n...Invalid Choice...\n");
            break;  
		}
        printf("\nDo you want to continue(Y/N)? ");
        scanf(" %c", &ch);
	} 
    return 0;
}

void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
}
void insert()
{
	create();
	if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}
void insert_atbeg()
{
    if(head==NULL)
    {
        head = temp = newnode;
    }
    else
    {
        create();
        newnode->next = head; 
        head = newnode;
    }
   display();
}
void delete_fromend()
{
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            prevnode = temp;
            temp = temp->next;
        }
        if(temp == head)
        {
            head = NULL;
        }
        else
        {
            prevnode->next = NULL;
        }
        free(temp);
    }
   display();
}
void traverse_forward()
{
    temp = head;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List is: \n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
} 
void display()
{
    printf("Linked list is: \n");
    temp = head;
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
