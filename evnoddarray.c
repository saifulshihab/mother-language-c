
#include<stdio.h>
int main(){
  int n,i, sum=0;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n], odd[n], even[n];

  printf("Enter array %d values: ",n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  int ev=0,od=0;

  for(i=0;i<n;i++){
    if(a[i]%2==0){
        even[ev]=a[i];
        ev++;
    }
    else {
        odd[od]=a[i];
        od++;
    }
  }
  printf("even array: ");
   for(i=0;i<ev;i++)
     printf("%d ",even[i]);

 printf("\nodd array: ");
   for(i=0;i<od;i++)
     printf("%d ",odd[i]);
}

