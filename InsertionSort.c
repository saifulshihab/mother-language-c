#include<stdio.h>
int main()
{
    int a[100],n,i,temp,c,j;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter arrays %d elements : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<n;i++){
            printf("\nPass %d: ",i);
            j=i;
        temp=a[j];
        while( j>0 && a[j-1]>temp ){
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
        for(c=0;c<n;c++)
  printf("%d ",a[c]);
    }

    printf("\n\n\nSorted array are: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}

