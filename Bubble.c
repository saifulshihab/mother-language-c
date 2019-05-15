#include<stdio.h>
int main()
{
    int k,n,i,temp,a[100],c;
    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array %d values:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(k=1;k<=n-1;k++){
    for(i=0;i<n-k;i++){
    if(a[i]>a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(c=0;c<n;c++)
        printf("%d ",a[c]);
    printf("\n");
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

