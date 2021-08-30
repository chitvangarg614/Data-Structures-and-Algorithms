#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node *head, *newnode, *temp;
void createlist(int n ){
    int i;
    if (n>=1){
    head= (struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d", &head->data);
    head->prev=0;
    head->next=0;
    temp=head;
    for(i=1;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d", &newnode->data)    ;
    newnode->prev=temp;
    newnode->next=0;
    temp->next=newnode;
    temp=newnode;
    }

    }
}
void display(){
    if (head==0)
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
    int n;
    scanf("%d",&n);
    createlist(n);
    display();
    return 0;
}