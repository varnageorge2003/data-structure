#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};
struct node*start=NULL;
struct node*getnode(){
int item;
printf("enter the value to insert:");
scanf("%d",&item);
struct node*new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=item;
new_node->link=NULL;
return new_node;
}
void enqueue(){
struct node*new_node=getnode();
if(start==NULL){
start=new_node;
}else{
struct node*ptr=start;
while(ptr->link!=NULL){
ptr=ptr->link;
}
ptr->link=new_node;
}
printf("%d is enqueued\n",new_node->data);
}
int dequeue(){
if(start==NULL){
printf("queue is empty,nothing to delete\n");
return 0;
}else{
struct node*ptr=start;
start=start->link;
free(ptr);
return 1;
}
}
void traverse(){
if (start==NULL){
printf("queue is empty.\n");
}else{
printf("queue elements are:");
struct node*ptr=start;
while(ptr!=NULL){
printf("->%d",ptr->data);
ptr=ptr->link;
}
}
}
void freelist(){
while(start!=NULL){
dequeue();
}
}
int main(){
int choice;
while(1){
printf("\n---queue menu---\n");
printf("1.enqueue\n");
printf("2,dequeue\n");
printf("3.traverse\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
enqueue();
break;
case 2:
if(dequeue()){
printf("item dequeued.\n");
}
break;
case 3:
traverse();
break;
case 4:
printf("exiting program\n");
freelist();
exit(0);
default:
printf("invalid choice!please chhoose a valid option\n");
}
}
return 0;
}
