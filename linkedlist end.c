#include <stdio.h>
#include <stdlib.h>

struct node {
    char Name;
    int phn_no;
    struct node *next;
}*head;

void createList(int n);
void insertNodeAtEnd(int data);
void displayList();

int main()
{
    int n, data;
    printf("Number of friends: ");
    scanf("%d", &n);
    createList(n);

    printf("\nData in the list \n");
    displayList();

    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtEnd(data);

    printf("\nData in the list \n");
    displayList();

    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    char Name, c;
    int phn_no, i;

    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Friend 1: ");
        printf("Name: ");
        scanf("%s", &c);
        printf("phone no: ");
        scanf("%d", &phn_no);

        head->data = data;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;

        temp = head;
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
