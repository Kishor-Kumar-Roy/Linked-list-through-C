#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void insert() {
    int value;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert: ");
    scanf("%d", &value);
    new->data = value;
    new->next = NULL;
    if (start == NULL) {
        start = new;
    } else {
        struct node *temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void display() {
    struct node *temp = start;
    if (temp == NULL) {
        printf("Empty list");
    } else {
        while (temp != NULL) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void reverse()
{
    struct node *prev=NULL,*next=NULL,*temp=start;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    start=prev;
printf("list reversed. \n");
}

int main() {
    int choice;
    while (1) {
        printf("1. Insert 2. Display 3. Reverse 4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                reverse();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
