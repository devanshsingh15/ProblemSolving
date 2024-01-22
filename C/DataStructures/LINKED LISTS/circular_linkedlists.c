#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;

void creation(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        newnode->next=head;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
}

void display()
{
    struct node *current=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        do{
            printf("%d ",current->data);
            current=current->next;
        }
        while(current!=head);
            printf("\n");
    }
}

void deletebeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("Underflow");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=head->next;
        free(head);
        head=ptr->next;

    }
}

int main()
{
    int n;
    creation(1);
    creation(2);
    creation(3);
    creation(4);
    creation(5);
    printf("Circular LL:\n");
    display();
    printf("\nhow many nodes u want to dlt:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        deletebeg();
    }
    printf("\nLL after deletion of %d nodes from beginning:\n",n);
    display();

    return 0;
}
