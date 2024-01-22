#include <stdio.h>
struct node
{
    int val;
    struct node *left;
    struct node *right;
};
Getnode(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->val = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
Preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->val);
        Preorder(root->left);
        Preorder(root->right);
    }
}
Postorder(struct node *root)
{
    if(root!=NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d\t",root->val);
    }
}
Inorder(struct node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        printf("%d\t",root->val);
        Inorder(root->right);
    }
}
int main()
{
    struct node *n1 = Getnode(1);
    struct node *n2 = Getnode(2);
    struct node *n3 = Getnode(3);
    struct node *n4 = Getnode(4);
    struct node *n5 = Getnode(5);
   n1->left=n2;
   n1->right=n3;
   n2->left=n4;
   n2->right=n5;
   n3->right=NULL;
   n3->left=NULL;
   n4->left=NULL;
   n4->left=NULL;
   n5->left=NULL;
   n5->left=NULL;
   printf("Preorder:\n");
   Preorder(n1);
   printf("\nPostorder:\n");
    Postorder(n1);
    printf("\nInorder:\n");
    Inorder(n1);
    return 0;
}
