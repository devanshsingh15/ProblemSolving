#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    printf("linked list:\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node *insertbeg(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

struct node *insertbet(struct node *head,int data,int pos)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=pos-1)
    {
        p=p->next;
        i++;
    }
};

int main()
{
    struct node *head,*second,*third,*fourth;
    head=(struct node *)malloc(sizeof(struct node));        //allocate memory for linked list in heap
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=fourth;

    fourth->data=7;
    fourth->next=NULL;

    traversal(head);
    head=insertbeg(head,9);
    printf("\nafter insertion:\n");
    traversal(head);

    return 0;
}






