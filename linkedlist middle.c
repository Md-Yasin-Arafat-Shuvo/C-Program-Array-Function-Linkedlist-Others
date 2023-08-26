
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*head;

void createList(int n);
void insertNodeAtMiddle(int data, int position);
void displayList();

int main()
{
    int n, data1, data2, position1,position2;
    printf("Enter N: ");
    scanf("%d", &n);
    createList(n);
    displayList();
    printf("\nInsert a new Node in a given position" );
    printf("\nFirst position: " );
    scanf("%d", &position1);
    printf("Value: ");
    scanf("%d", &data1);
    printf("\nSecond position: " );
    scanf("%d", &position2);
    printf("Value: ");
    scanf("%d", &data2);

    insertNodeAtMiddle(data1, position1);
    insertNodeAtMiddle(data2, position2);

    printf("\nAfter inserting Two New nodes\n");
    printf("The list is: \n");
    displayList();

    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, data1, data2, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

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
    }
}

void insertNodeAtMiddle(int data, int position)
{
    int i;
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
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {

            newNode->next = temp->next;

            temp->next = newNode;
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
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
