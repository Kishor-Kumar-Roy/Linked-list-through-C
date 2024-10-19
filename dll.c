#include<stdio.h>
#include<stdlib.h>
struct node {
   int info;
   struct node *prev, *next;
};
struct node *start=NULL;
void insert() {
    int data;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("enter value to insert: ");
    scanf("%d",&data);
    new->info=data;
    new->next=NULL;
    if(start==NULL) 
    {
        start=new;
    }
    else {
        struct node *temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        new->prev=temp;
        temp->next=new;
    }
}
void display()
{
    struct node *temp=start;
    if(start==NULL)
    {
        printf("empty list");
       
    }
    else {
        while(temp!=NULL){
            printf("%d->",temp->info);
            temp=temp->next;
        }
        printf("NULL");
    }

}
void deletelastnode() {
    struct node *temp=start,*temp2;
    while(temp->next!=NULL) {
        temp2=temp;
        temp=temp->next;
    }
temp2->next=NULL;
temp->prev=NULL;
printf("successfully deleted.");
}
void search() {
    struct node *temp=start;
    int p=0,value;
    printf("enter value to search:");
    scanf("%d",&value);
    while(temp!=NULL) {
        if(temp->info!=value) {
            temp=temp->next;
        }
        else {
            p=1;
            break;
        }
    }
    if(p==0) {
        printf("data not found");
    }
    else {
        printf("data found");
    }
}
int main() 
{
    int choice,value;
    while(1) {
        printf(" \n 1.create node 2.display 3.delete last node 4.search 5.exit \n");
        scanf("%d",&value);
        switch(value) {
            case 1: insert();
            break;
            case 2: display();
            break;
            case 3:deletelastnode();
            break;
            case 4: search();
            break;
            case 5:exit(0);
            default:printf("invalid choice!");
        }
    }

    return 0;
}