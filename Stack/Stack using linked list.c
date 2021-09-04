#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *top=0,* newnode;
void push(int n );
void pop();
void display();
int main(){
    int choice,n;
    while(1){
        printf("1. Push\t2. Pop\t 3.Display\t 4. Exit");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("enter data to be pushed in stack");
                    scanf("%d",&n);
                    push(n);
                    break;
            case 2: pop();
                     break;
            case 3: display();
                     break;
            case 4: exit(0);
                     break;                 
        }
    }
return 0;

}
void push(int n){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=n;
newnode->data=n;
newnode->next=top;
top=newnode;
}

void pop(){
    struct node *temp;
    if(top==0)
    printf("Empty list\n");
    else{
        top=top->next;
        free(temp);
    }}

void  display(){
    struct node* temp;
    temp=top;
    if (top==0)
    printf("empty list\n");
    else{ while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
        
    }}