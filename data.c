#include<stdio.h>
int main(){
int array[100],i,n,position,j,item;
printf("Enter array size: ");
scanf("%d",&n);
printf("Enter array %d elements: ",n);
for(i=0;i<n;i++)
scanf("%d", &array[i]);
int in;
printf("How many element you want to insert: ");
scanf("%d", &in);
for(i=0;i<in;i++){
    printf("\nEnter element %d: ",i+1);
    scanf("%d", &item);
    printf("Enter the position of insertion: ");
scanf("%d", &position);
for(j=n-1;j>=position-1;j--)
        array[j+1]=array[j];
array[position-1]=item;
}
for(i=0;i<n+in;i++)
    printf("%d ", array[i]);

}


