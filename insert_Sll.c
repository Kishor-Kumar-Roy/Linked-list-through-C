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
    struct node *new=(struct node *) malloc(sizeof(struct node));
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
void insertfirst()
{
    int data ;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("enter your insert value:");
    scanf("%d",&data);
    new-> info=data;
    new->next=start;
    start=new;
}
void insertafternode()
{
    int item,data,p=0;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    struct node *temp = start;
    printf("enter the find element:");
    scanf("%d",&item);
    while (temp!=NULL)
    {
        if(temp->info!=item)
        {
            temp=temp->next;
        }
        else {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        printf("data not found");
    }
    else {
        printf("data found \n");
        //void insertfirst()
        {
            int data ;
            struct node *new=(struct node *)malloc(sizeof(struct node));
            printf("enter your insert value:\n");
            scanf("%d",&data);
            new-> info=data;
            new->next=temp->next;
            temp->next=new;
        }
    }
}
void insertbeforenode()
{
    int item,data,p=0;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    struct node *temp1 = start;
    printf("enter the find element:");
    scanf("%d",&item);
    while (temp1!=NULL)
    {
        if(temp1->info!=item)
        {
            struct node *temp2=temp1;
            temp1=temp1->next;
        }
        else {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        printf("data not found");
    }
    else {
        printf("data found \n");
    
        {
            int data ;
            struct node *temp2;
            struct node *new=(struct node *)malloc(sizeof(struct node));
            printf("enter your insert value:\n");
            scanf("%d",&data);
            new-> info=data;
            new->next=temp1;
            temp2->next=new;
           
            
        }
    }
}
void insertlast()
{
    int data ;

    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("enter your insert value:");
    scanf("%d",&data);
    new-> info=data;
    new->next=NULL;
    struct node *temp=start;
    while(temp->next=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
}

int main()
{
    int choice=0;
    while (choice<=8)
    {
        printf("\nEnter your choice:");
        printf("press 1 for node create and insert:\n press 2 for display:\n press 3 for search :\n press 4 for exit: \n press 5 for to insert new node at first: \n press 6 for to insert new node after a given node: \n press 7 for to insert new node before a given node: \n press 8 for to insert new node at last: \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search ();
            break;
        case 4:
            exit(0);
            break;

        case 5:
            insertfirst();
            break;
        case 6:
            insertafternode();
            break;
            case 7:
            insertbeforenode();
            break;
            case 8:
            insertfirst();
            break;
        default:
            printf("please enter valid choice");
        }
    }
    return 0;

}