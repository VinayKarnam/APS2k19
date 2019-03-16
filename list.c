
#include<stdio.h>
struct node
{
    /* data */
    int data;
    struct node* n;
};

typedef struct node NODE;


NODE* insert_start(NODE* head)
{
 NODE* newnode;
 newnode=(NODE*)malloc(sizeof(newnode));
 if(newnode==NULL)
 {
     printf("memory is full");
 }
 int num;
 printf("enter the data\n");
 scanf("%d",&num);
 newnode->data=num;
 newnode->n=NULL;
 if(head==NULL)
 {
     return newnode;
 }
 else
 {
     newnode->n=head;
     return newnode;
 }
 
}



void insert_end(NODE* head)
{
    NODE* newnode,*temp;
 newnode=(NODE*)malloc(sizeof(newnode));
 if(newnode==NULL)
 {
     printf("memory is full");
 }
 int num;
 printf("enter the data\n");
 scanf("%d",&num);
 newnode->data=num;
 newnode->n=NULL;
 if(head==NULL)
 {
     return newnode;
 }
 else
 {
     temp=head;
     while(temp->n!=NULL)
     {
         temp=temp->n;
     }
     temp->n=newnode;
 }
 

}


void insert_middle(NODE* head)
{
    NODE* newnode,*temp;
 newnode=(NODE*)malloc(sizeof(NODE));
 if(newnode==NULL)
 {
     printf("memory is full");
 }
 int num;
 printf("enter the data\n");
 scanf("%d",&num);
 newnode->data=num;
 newnode->n=NULL;
 printf("enter the position\n");
 int pos;
 scanf("%d",&pos);
 
 int i;
 temp=head;
 for(i=0;i<pos-1;i++)
 {
     if(temp->n==NULL)
     {
         printf("cannot insert\n");
         break;
     }
     else
     {
         temp=temp->n;
     }

     
 }

 newnode->n=temp->n;
 temp->n=newnode;

 

}


NODE* delete_front(NODE* head)
{
    NODE* temp;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head->n;
        head->n=NULL;
        free(head);
        
    }
    
}

NODE* delete_end(NODE* head)
{
    NODE* temp;
    temp=head;
    while(temp->n->n!=NULL)
    {
        temp=temp->n;
    }

    free(temp->n);
    temp->n=NULL;
}

void display(NODE* head)
{
    NODE* temp;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
    }
    printf("\n");
}

int main()
{
    NODE* head;
}