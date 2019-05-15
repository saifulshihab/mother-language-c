/*#include<stdio.h>
int main()
{
    int i,s,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array %d values: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a element to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(s==a[i]){
            printf("\nElement is found in %dth position.\n",i+1);
            break;
        }
    }
    if(i==n)
    printf("\nGiven Element is not found in this array!!");
}

*/

#include<stdio.h>
int main()
{
    int i,s,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array %d values: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a element to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(s==a[i]){
            printf("\nElement found in %d position.\n",i+1);
            i=n;
        }
    }
    if(i==n)
    printf("\nGiven Element is not found in this array!!");
}






