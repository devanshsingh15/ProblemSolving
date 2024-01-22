#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

traverse(struct node *ptr)
{2
    printf("Linked List:\n");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node *getnode(struct node *head,int val)
{
    head=(struct node *)malloc(sizeof(struct node));
    head->data=val;
    head->next=NULL;
}

int main()
{
    struct node *head;
    getnode(head,1);
    getnode(head,2);
    getnode(head,3);
    getnode(head,4);
    traverse(head);
    return 0;
}
