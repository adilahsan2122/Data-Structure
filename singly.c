#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data ;
    struct node * next;
};

struct node * head=NULL;

void add(int val)
{
    struct node * newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    struct node * tmp=head;
    while(tmp->next != NULL) tmp=tmp->next;
    tmp->next=newnode;
    return ;
}

void display()
{
    printf("Contents of the linked list : \n");
    struct node * tmp=head;
    while(tmp != NULL)
    {
        printf("%d \n",tmp->data);
        tmp=tmp->next;
    }
    return ;
}
int main()
{
    add(5);
    add(7);
    display();
}
