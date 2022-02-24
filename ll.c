#include <stdio.h>
#include<stdlib.h>
#define NODE_SIZE 5
typedef struct node 
{
    int data;
    struct node  *link;
}slist;
slist *head = NULL;
void insert(int data)
{
    slist *new=malloc(sizeof(slist));
    if(new==NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        
        new->data=data; //updating data(linking the new with last node)
        new->link=NULL;
    
    if(head==NULL) // checking if there are any nodes
    {
        head = new; //first node has been created
    }
   else // at least one node is present
    {
        slist *temp= head;
        while(temp->link!=NULL) //trying to find the last node which has null in it
        {
            temp =temp->link;
        }
        temp->link=new;
    }
    }
}
void display()
{
    slist *temp=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->link;
        }
    }
}

int search(int element)
{
    if (head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        slist *temp=head;
        while(temp!=NULL) //traversing till last node
        {
            if(temp->data == element)
            {
            printf("Element found");
            return 0;
            }
            else
            {
                temp=temp->link; //if element is not found it will move to the next node
            }
        }
        printf("Element not found");
    }
}
int main()
{
    slist *head=NULL; //goes till the end of last node
    int data,i=0,element;
    while(i++ <NODE_SIZE)
    {
    printf("Enter data: ");
    scanf("%d",&data);
    insert(data);
    }
    display();
    printf("\nEnter an element");
    scanf("%d",&element);
    search(element);
}

