
#include<stdio.h>
int main(){
int i,n,item,p;
printf("Enter array  size: ");
scanf("%d",&n);
int a[n];
printf("Enter array %d values: ",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Enter a position: ");
scanf("%d",&p);
for(i=p-1;i<n-1;i++){
    a[i]=a[i+1];
    }
    printf("resultant array(after deletion):\n");
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
}
