//BINARY SEARCH TREE OPERATIONS
#include<stdio.h>
#include<stdlib.h>
 struct node
{
        struct node *lchild;
        int info;
        struct node *rchild;
};

struct node *search(struct node *ptr, int skey);   //serach
struct node *insert(struct node *ptr, int ikey);   //insert
struct node *del(struct node *ptr, int dkey);    //delete
void display(struct node *ptr);    //display

int main( )
{
        struct node *root=NULL,*ptr;
        int choice,k;

        while(1)
        {
                printf("\n");
                printf("\n 1.Insert 2.Delete 3. Search  4.Display 5.Quit \nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {


                case 1:
                        printf("\nEnter the key to be inserted : ");
                        scanf("%d",&k);
                        root = insert(root, k);
                        break;

                case 2:
                        printf("\nEnter the key to be deleted : ");
                        scanf("%d",&k);
                        root = del(root,k);
                        break;
                case 3:
                        printf("\nEnter the key to be searched : ");
                        scanf("%d",&k);
                        ptr = search(root, k);
                        if(ptr!=NULL)
                                printf("\nKey is found\n");
                        break;
                 case 4:
                        printf("\n Elements of BST are :\n");
                        display(root);
                        break;

                 case 5: exit(1);

                 default: printf("\n Invalid Choice\n");
                }/*End of switch */
        }/*End of while */
         return 0;
 }

struct node *search(struct node *ptr, int skey)
{
        if(ptr==NULL)
        {
                printf("key not found\n");
                return NULL;
        }
        else if(skey < ptr->info)/*search in left subtree*/
                return search(ptr->lchild, skey);
        else if(skey > ptr->info)/*search in right subtree*/
   return search(ptr->rchild, skey);
        else /*skey found*/
                return ptr;
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

struct node *del(struct node *ptr, int dkey)
{
        struct node *tmp, *succ;

        if( ptr == NULL)
        {
                printf("\nDkey not found\n");
                return(ptr);
        }
        if( dkey < ptr->info )/*delete from left subtree*/
                ptr->lchild = del(ptr->lchild, dkey);
        else if( dkey > ptr->info )/*delete from right subtree*/
                ptr->rchild = del(ptr->rchild, dkey);
        else
        {
                /*key to be deleted is found*/
                if( ptr->lchild!=NULL  &&  ptr->rchild!=NULL )  /*2 children*/
                {
                        succ=ptr->rchild;
                        while(succ->lchild)
                                succ=succ->lchild;
                        ptr->info=succ->info;
                        ptr->rchild = del(ptr->rchild, succ->info);
  }
                else
                {
                        tmp = ptr;
                        if( ptr->lchild != NULL ) /*only left child*/
                                ptr = ptr->lchild;
                        else if( ptr->rchild != NULL) /*only right child*/
                                ptr = ptr->rchild;
                        else    /* no child */
                                ptr = NULL;
                        free(tmp);
                }
        }
        return ptr;       }
 void display(struct node *ptr)
{
       if(ptr == NULL )/*Base Case*/
       return;
        display(ptr->lchild);
        printf("%d  ",ptr->info);
        display(ptr->rchild);
}

