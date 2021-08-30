#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
    int data;
    struct node * next;
};
int main(){
int choice;
struct node *head, *newnode, *temp;
head=0;
while(choice){
newnode=(struct node *)malloc(sizeof(struct node))   ; 
printf("enter data");
scanf("%d", &newnode->data);
newnode->next=0;

if (head==0)
head=temp=newnode;
else 
temp->next=newnode;
temp=newnode;

printf("0: Exit\n1:Continue\n");
scanf("%d", &choice);
}
int count=0;
temp=head;
    while(temp!=0){
        temp=temp->next;
        count++;

    }
    printf("total number of nodes is %d", count);
    return 0;
}