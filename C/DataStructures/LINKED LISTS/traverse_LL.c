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
int main()
{
    struct node *head,*second,*third;
    head=(struct node *)malloc(sizeof(struct node));        //allocate memory for linked list in heap
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=NULL;

    traversal(head);

    return 0;
}






