#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node * head;

void list(int n){
struct node *newnode, *temp;
int data,i;
head=(struct node *)malloc(sizeof(struct node))   ;
if (head!=0)
{
    printf("enter data");
    scanf("%d", &data );
    head->data=data;
    head->next=0;
    temp=head;
    for(i=1;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node))  ;
        if (newnode==0){
            break;
        }
        else{
            printf("enter data");
            scanf("%d", &newnode->data);
            newnode->next=0;
            temp->next=newnode;
            temp=temp->next;

        }
}
}
}

void insertbeginning(int element){
    struct node * newnode;
         newnode=(struct node *)malloc(sizeof(struct node)) ;
         newnode->data =element;
         newnode->next=head;
         head=newnode;
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
        printf("%d", temp->data);
        temp=temp->next;
    }
}
}

int main(){
    int n , data;
    printf("enter total num of nodes ");\
    scanf("%d",  &n);
    list(n);
    printf("enter data to be added at the beginning node");
    scanf("%d", &data);
    insertbeginning(data);
    display();
    return 0;
}