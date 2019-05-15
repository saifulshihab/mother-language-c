
#include<stdio.h>
int main(){
  int n,i, sum=0;
  printf("Enter array size: ");
  scanf("%d", &n);
  int a[n];

  printf("Enter array %d values: ",n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  for(i=0;i<n;i++){
    sum+=a[i];
     printf("i= %d  a[i]= %d sum= %d\n", i, a[i], sum);
  }
 printf("sum is: %d",sum);
}
