#include <stdio.h>
#include <stdlib.h>

//Represents the node of list.
struct node{
    int data;
    struct node *next;
};

//Declaring head and tail pointer as null.
struct node *head = NULL;
struct node *tail = NULL;

//This function will add the new node at the end of the list.
void create(int data){
    //Create new node
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    //Checks if the list is empty.
    if(head==NULL)
    {
        //If list is empty, both head and tail would point to new node.
        head = newnode;
        tail = newnode;
        newnode->next = head;
    }
    else
    {
        //tail will point to new node.
        tail->next = newnode;
        //New node will become new tail.
        tail = newnode;
        //Since, it is circular linked list tail will point to head.
        tail->next = head;
    }
}

//This function will display the nodes of circular linked list
void display(){
    struct node *current = head;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        printf("Nodes of the circular linked list: \n");
         do{
             //Prints each node by incrementing pointer.
            printf("%d ", current->data);
            current = current->next;
        }while(current != head);
        printf("\n");
    }
}

void beg_delete()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW\n");
    }

    else
    {
        ptr = head;
        while(ptr -> next != head)
            ptr = ptr -> next;
        ptr->next = head->next;

        head = ptr->next;
        printf("\nNode Deleted\n");
    }
}

int main()
{
    //Adds data to the list
   create(1);
   create(2);
   create(3);
   create(4);
   //Displays all the nodes present in the list
   display();
    beg_delete();
    display();
   return 0;
}
