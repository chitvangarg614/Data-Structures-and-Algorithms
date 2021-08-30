#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *head, *newnode,*temp;
void list(int n ){
int i,data;
head=(struct node *)malloc(sizeof(struct node));
if(head!=0){
printf("enter data");
scanf("%d",&head->data);
head->next=0;
temp=head;}
for(i=1;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    if (newnode==0){
        break;
    }
    else{
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp->next=newnode;
        temp=temp->next;
    }
}


}

void deletionAtBeginning()
{
    if(head==0)
    printf("empty list");
    temp=head;
    head=head->next;
    free(temp);
}

void  display(){
    if (head==0)
      printf("list is empty");
      else{
          temp=head;
          while(temp!=0){
              printf("%d\t", temp->data);
              temp=temp->next;
          }
      }
}

int main(){
    int n , data;
    printf("enter total num of nodes");
    scanf("%d", &n);
    list(n);
    deletionAtBeginning();
    display();
    return 0;

}