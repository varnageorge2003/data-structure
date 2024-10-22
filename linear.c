#include<stdio.h>
int main()
{
int array[100],s,c,n;
printf("enter number of elements in array\n");
scanf("%d",&n);
printf("enetr %d integers\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter a number to search\n");
scanf("%d",&s);
for(c=0;c<n;c++)
{
if(array[c]=s)
{
printf("%d is present at location %d\n",s,c+1);
break;
}
}
if(c==n)
printf("%d isnt present in the array\n",s);
return 0;
}
