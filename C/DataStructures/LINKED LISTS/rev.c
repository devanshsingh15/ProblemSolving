#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertbeg(struct node  *head, int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

struct node *insertbet(struct node *head, int data, int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};

struct node *insertend(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
};

struct node *insertafter(struct node *head,int data,int prevnode)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node))
    {

    };
};

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    printf("Linked List:\n");
    traversal(head);
    printf("\ninsertion beginning\n");
    head=insertbeg(head,4);
    traversal(head);
    printf("\ninsertion between\n");
    head=insertbet(head,5,2);
    traversal(head);
    printf("\ninsertion end\n");
    insertend(head,6);
    traversal(head);

    return 0;
}
