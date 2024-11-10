#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* createNode(struct node *start, int val) {
    struct node *newNode;
    newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    
    if(start==NULL) {
        start=newNode;
    }
    else{
        struct node *temp=start;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    return start;
}

void Display(struct node *ptr) {
      while(ptr!=NULL) {
            printf("Element is %d\n", ptr->data);
            ptr=ptr->next;
        }
}

int main() {
    struct node *start=NULL;
    
   start =createNode(start, 10);
   start=createNode(start, 20);
   start=createNode(start, 30);
   start=createNode(start, 40);

    Display(start);
    
    return 0;
}
