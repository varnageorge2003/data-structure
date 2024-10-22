#include<stdio.h>
#include<stdlib.h>
int n,a[50];
void display(){
int i;
if(n==0){
printf("array is empty\n");
return;
}
printf("array element are:\n");
for(i=0;i<n;i++){
  printf("%d",a[i]);
 }
 printf("\n-----\n");
 }
 void insertion(){
 int i,pos,elem;
 if(n>=50){
 printf("array is full,cannot insert more elements\n");
 return;
 }
 printf("enter the postion(0 to %d) where you want to insert and the value:",n);
 scanf("%d%d",&pos,&elem);
 if(pos<0||pos>n){
 printf("invalid position!\n");
 return;
 }
 n++;
 for(i=n-2;i>=pos;i--){
 a[i+1]=a[i];
 }
 a[pos]=elem;
 printf("array after insertion\n");
 display();
 }
 void deletion(){
 int i,pos;
 if(n==0){
 printf("array is empty,nothing to delete\n");
 return;
 }
 printf("enter the postion(0 to %d)of the elements to be deleteed:",n-1);
 scanf("%d",&pos);
 if(pos<0||pos>=n){
 printf("invalid postion!\n");
 return;
 }
 int elem=a[pos];
 for(i=pos;i<n-1;i++){
 a[i]=a[i+1];
 }
 n--;
 printf("deleted element:%d\n",elem);
 printf("array after deletion:\n");
 display();
 }
 int main(){
 int i,ch;
 printf("create array\n");
 printf("enter the number of element(n):");
 scanf("%d",&n);
 printf("enetr %d array elements:\n",n);
 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 while(1){
 printf("\n---menu---\n");
 printf("1.display array\n");
 printf("2.insert element\n");
 printf("delete element\n");
 printf("4.exit\n");
 printf("enter your choice:");
 scanf("%d",&ch);
 switch(ch){
 case 1:
 display();
 break;
 case 2:
 insertion();
 break;
 case 3:
 deletion();
 break;
 case 4:
 exit(0);
 default:
 printf("invalid choice,please try again\n");
 }
 }
 return 0;
 }
  
