#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *head,*temp,*newnode, *prev;

 void list(int n){
     head= (struct node *)malloc(sizeof(struct node));
     if (head!=0){ 
         printf("enter data");
         scanf("%d",&head->data);
         head->next=0;
         temp=head;
    for(int i=1;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp->next=newnode;
        temp=temp->next;}
    

     }
 }

void printMiddle(){
    struct node * first=head;
    struct node *second =head;
    if (head!=0){
        while(second!=0 && second->next!=0){
            first=first->next;
            second=second->next->next;

        }
        printf("The middle element is\t%d",first->data);
    }
}

 int main(){
     int n;
     printf("enter total number of nodes");
     scanf("%d",&n);
     list(n);
     printMiddle();
     return 0;}