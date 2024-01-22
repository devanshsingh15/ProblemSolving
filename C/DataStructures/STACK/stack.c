#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
//Time complexity of all push,pop,peek,is empty,isfull operation  is O(1)
void push(struct stack *s1, int data)
{
    if (s1->top == s1->size - 1)
    {
        printf("Overflow");
    }
    else
    {
        s1->top++;
        s1->arr[s1->top] = data;
       // printf("%d is pushed into the stack\n", data);
    }
}
void pop(struct stack *s1)
{
    //printf("Pop operation ");
    if (s1->top < 0)
    {
        printf("Underflow");
    }
    else
    {
        int data = s1->arr[s1->top];
        s1->top--;
      //  printf("Deleted data: %d\n", data);
    }
}
void peek(struct stack *s1, int i)
{
    if (s1->top - i + 1 < 0)
    {
        printf("Invalid position");
    }
    else
    {
        //s1->top = s1->top - i + 1;
        printf("Data at %d position is: %d\n", i, s1->arr[s1->top-i+1]);
    }
}
int stacktop(struct stack *s1)
{
    return s1->arr[s1->top];
}
int stackbottom(struct stack *s1)
{
    return s1->arr[0];
}

int main()
{  int n;
printf("How many value to want to insert in stack: ");
scanf("%d",&n);
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->size = n;
    s1->top = -1;
    s1->arr = ((int *)malloc(s1->size * sizeof(int)));
    // printf("Enter data values you want to insert one by one\n");
    for(int i=1;i<=n;i++)
    { int data;
    printf("Enter %d th element you want to insert: ",i);
    scanf("%d",&data);
    push(s1,data);
    }
    int pop_ele;
    printf("How many element you want to pop from stack: ");
    scanf("%d",&pop_ele);
    for(int i=1;i<=pop_ele;i++)
    {
        pop(s1);
    }
    printf("Element in your stack\n");
    for(int i=1;i<=s1->top+1;i++)
    {
        peek(s1,i);
    }
    printf("Top most value of stack is: %d \n",stacktop(s1));
    printf("Bottom most value of stack is: %d\n",stackbottom(s1));
     return 0;
}
