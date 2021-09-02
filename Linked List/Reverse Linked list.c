#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode, *prev,*current;

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
void reverse(){
    struct node*nextnode,*current;
    prev=0;
    current=nextnode=head;
    while(nextnode!=0){
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;
}
void display(){
struct node *temp;
if (head==NULL)
{
    printf("empty list");
}
else{
    temp=head;
    while(head!=0){
        printf("%d\t", temp->data);
        temp=temp->next;
    }
}
}
int main(){
    printf("enter total number of nodes");
    int n;
    scanf("%d",&n);
    list(n);
    reverse();
    display();
    return 0;
}