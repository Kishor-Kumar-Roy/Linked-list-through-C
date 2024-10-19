#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;
void insert()
{
    int item ;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("enter your insert value:");
    scanf("%d",&item);
    new-> info=item;
    new->next=NULL;
    if(start==NULL)
    {
        start=new;
    }
    else
    {
        struct node *temp=start;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}
void display ()
{
    struct node *temp = start;
    if (temp == NULL)
    {
        printf("Empty lsit");

    }
    else
    {
        while(temp != NULL)
        {
            printf("%d->",temp->info);
            temp=temp->next;

        }
        printf("NULL");
    }
}
void search ()
{
    int item,p=0;;
    printf("Enter the find element : ");
    scanf("%d",&item);
    struct node *temp=start;
    if(start==NULL)
    {
    printf("empty list");
    }
    else
    {
    while (temp!=NULL)
    {
        if(temp->info!=item)
        {
            temp=temp->next;
        }
        else
        {
            p=1;
            break;
        }

    
    }
    if(p==0)
    {
        printf("data not found");
    }
    else
    {
        printf("data found ");
    }

}

}

int main()
{
    int choice=0;
    while (choice<=4)
    {
        printf("\nEnter your choice:");
        printf("press 1 for node create and insert:\n press 2 for display:\n press 3 for search :\n press 4 for exit: \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
            case 3: search ();
        case 4:
            exit(0);
            break;
        default:
            printf("please enter valid choice");
        }
    }
    return 0;

}