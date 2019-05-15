#include<stdio.h>
int main()
{
    int k,n,i,temp,a[100],s,beg,end,mid; ///
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array %d values:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<n;i++){
    for(k=0;k<n-i;k++){
    if(a[k]>a[k+1]){
        temp=a[k];
        a[k]=a[k+1];
        a[k+1]=temp;
    }
}
}
printf("\nResultant array is : ");
for(i=0;i<n;i++)
printf("%d ",a[i]);

printf("\nEnter a element to search: \n");
scanf("%d",&s);
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end){
    if(s>a[mid])
        beg=mid+1;
    else if(s == a[mid]){
        printf("%d is found in %d position,",s,mid+1);
        break;
    }
    else
        end=mid-1;
    mid=(beg+end)/2;
}
 if(beg>end)
        printf("Item not found!\n");

}






