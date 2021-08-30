#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node *head,*temp,*newnode;
void list(int n){
    struct node *temp;
    head=(struct node *)malloc(sizeof(struct node));
    if (head!=0){
        printf("enter data ");
        scanf("%d",&head->data);
        head->next=0;
    }
        temp=head;
        for(int i=1;i<n;i++){
            newnode=(struct node *)malloc(sizeof(struct node));
            if (newnode==0)
            break;
             else{
            printf("enter data");
            scanf("%d", &newnode->data);
            newnode->next=0;
            temp->next=newnode;
            temp=temp->next;

            }
        }
    }


void insertatPosition(int element, int pos){
    int i=0;
    struct node *temp;

    if(newnode!=0){
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;

        }
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=element;
        newnode->next=temp->next;
        temp->next=newnode;
  
    }
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
    int n , data,pos;
    printf("enter total num of nodes ");\
    scanf("%d",  &n);
    list(n);
    printf("enter position at which node is to be inserted");
    scanf("%d",&pos);
    printf("enter data to be added at the beginning node");
    scanf("%d", &data);
    insertatPosition(data,pos);
    display();
    return 0;
}