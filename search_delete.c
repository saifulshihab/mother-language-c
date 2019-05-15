#include<stdio.h>
int main(){

int i,n,s,p,j,a[100];
printf("Enter Array Size: ");
scanf("%d", &n);
printf("Enter array %d values: ",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("\nEnter a Element To search:  ");
 scanf("%d", &s);
 for(i=0;i<n;i++){
 if(s==a[i]){
    printf("Element is found in array %d\n",i+1);
 /*Deletion*/
 for(j=i;j<n;j++)
    a[j]=a[j+1];
 printf("\nAfter Delete this element(search item)\nResultant array is: \n");
 for(j=0;j<n-1;j++)
    printf("%d ",a[j]);
 break;
 }
 }
if(i==n)
    printf("\nElement is not found in this Array!!!");
}



