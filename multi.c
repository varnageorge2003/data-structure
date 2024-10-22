#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],b[10][10],m[10][10],i,j,k,r,c,n;
printf("enter the number of row:");
scanf("%d",&r);
printf("enter the number of column:");
scanf("%d",&c);
printf("enter the first matrix of element:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix of element:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("multiply of the matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
m[i][j]=0;
for(k=0;k<c;k++)
{
m[i][j]+=a[i][j]*b[i][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\n",m[i][j]);
}
printf("\n");
}
return 0;
}

