#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node*next;
 }node;
 int main(){
    int i;
    struct node*head,*newnode,*temp;
    head=NULL;
    while(i){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter data");
        scanf("%d",&newnode->data);
        if(head==0){
            head=newnode=temp;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter 1 for newnode and 0 to stop adding newnode \n");
    scanf("%d",&i);
    }
    temp=head;
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp=temp->next;
    }


 }



