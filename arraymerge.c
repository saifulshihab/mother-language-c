
#include<stdio.h>
int main(){
int i,m=0,n=0,a[100],b[100],c[m+n+2],k=0;
printf("\nEnter A array size: ");
scanf("%d",&m);
printf("\nEnter A arrays elements: ");
for(i=0;i<m;i++)
    scanf("%d",&a[i]);
printf("\nEnter B array size: ");
scanf("%d",&n);
printf("\nEnter B arrays elements: ");
for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    printf("\nA elements are: ");
    for(i=0;i<m;i++)
        printf("%d ",a[i]);
    printf("\nB elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
for(i=0;i<m;i++){
    c[k]=a[i];
    k++;
}
for(i=0;i<n;i++){
    c[k]=b[i];
    k++;
}
printf("\n\nAfter merging two array:  ");
for(i=0;i<k;i++)
    printf("%d ",c[i]);
    printf("\n\n");
return 0;

}
