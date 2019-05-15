

#include<stdio.h>

int main()
{
 int n,i,j;

 int a[7]={100,50,20,10,5,2,1};
 int b[7];

 scanf("%d",&n);
printf("%d\n",n);
 for(i=0;i<7;i++){
    b[i]=n/a[i];
    n=n%a[i];
 }
 for(j=0;j<7;j++){
    printf("%d nota(s) de R$ %d,00\n",b[j],a[j]);
 }
 }




