#include<stdio.h>

int main()
{
int array[10],n,i,position,item,j;
printf("Enter the size of array: ");
scanf("%d", &n);
printf("Enter array %d values: ",n);
for(i=0;i<n;i++)
    scanf("%d", &array[i]);
printf("\nEnter the position of insertion: ");
scanf("%d", &position);
printf("\nEnter the value you want to insert: ");
scanf("%d", &item);
for(j=n-1;j>=position-1;j--)
    array[j+1]=array[j];
array[position-1]=item;
for(i=0;i<=n;i++)
    printf("%d ", array[i]);
}
