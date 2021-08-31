#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *head,*temp,*newnode, *prev;
void list(int n ){
 head=(struct node *)malloc(sizeof(struct node));
 if (head!=0){
     printf("enter data");
     scanf("%d", &head->data);
     head->next=0;
     temp=head;
     for(int i=1;i<n;i++){
         newnode=(struct node *)malloc(sizeof(struct node));
         if (newnode==0)\
         break;
         else{
         printf("enter data");
         scanf("%d",&newnode->data);
         newnode->next=0;
         temp->next=newnode;
         temp=temp->next;
         }
     }
 }
}
void deletionAtEnd(){
    if (head->next==0)
    {free(head);
    head=0;}
    temp=head,prev;
    while(temp->next!=0){
            prev=temp;
            temp=temp->next;
        }
    free(temp);
    prev->next=0;
        


}

void display(){
    if(head==0)
    printf("empty list");
    else{
        temp=head;
        while(temp!=0){
            printf("%d\t", temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    printf("enter total num of nodes");
    int n ;
    scanf("%d", &n);
    list(n);
    deletionAtEnd();
    display();
    return 0;
}