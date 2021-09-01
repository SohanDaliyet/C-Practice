#include<stdio.h>
#include<stdlib.h>
struct node
{
        struct node *lchild;
        int info;
        struct node *rchild;
};

struct node *insert(struct node *ptr, int ikey);
void preorder(struct node *ptr);
void inorder(struct node *ptr);
void postorder(struct node *ptr);

int main( )
{
        struct node *root=NULL,*ptr;
        int choice,k;
        while(1)
        {
                printf("\n");
                printf("\n 1.Insert  2.Preorder Traversal  3.Inorder Traversal 4.Postorder Traversal 5.Exit \nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1: printf("\nEnter the key to be inserted : ");
                              scanf("%d",&k);
                              root = insert(root, k);
                              break;
                  case 2: printf("\n Preorder Traversal  \n");
                          preorder(root);
                          break;
                 case 3:  printf("\n Inorder Traversal  \n");
                          inorder(root);
                          break;
                 case 4:  printf("\n Postorder Traversal  \n");
                          postorder(root);
                          break;
                 case 5: exit(1);

                 default: printf("\n Invalid Choice\n");
                }
        }
         return 0;
 }

struct node *insert(struct node *ptr, int ikey )
{
        if(ptr==NULL)
        {
                ptr = (struct node *) malloc(sizeof(struct node));
                ptr->info = ikey;
                ptr->lchild = NULL;
                ptr->rchild = NULL;
        }
        else if(ikey < ptr->info) /*Insertion in left subtree*/
                ptr->lchild = insert(ptr->lchild, ikey);
        else if(ikey > ptr->info) /*Insertion in right subtree */
                ptr->rchild = insert(ptr->rchild, ikey);
        else
                printf("\nDuplicate key\n");
        return ptr;
}

void postorder(struct node *ptr)
{
        if(ptr == NULL )/*Base Case*/
                return;
        postorder(ptr->lchild);
        postorder(ptr->rchild);
        printf("%d  ",ptr->info);
 }

void preorder(struct node *ptr)
{
        if(ptr == NULL )        /*Base Case*/
                return;
        printf("%d  ",ptr->info);
        preorder(ptr->lchild);
        preorder(ptr->rchild);
}
 void inorder(struct node *ptr)
{
        if(ptr == NULL )/*Base Case*/
                return;
        inorder(ptr->lchild);
        printf("%d  ",ptr->info);
        inorder(ptr->rchild);
}
