#include<stdio.h>
int main()
{
  int iCounter,sum=0,n;
  printf("How many number: ");
  scanf("%d", &n);
  for(iCounter=1;iCounter<=n;iCounter++)
   {
       sum+=iCounter;
   }
   printf("%d", sum);
   return 0;


}
