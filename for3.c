#include<stdio.h>
#include<math.h>
int main()
{
  int iCounter,sum=0,n,m,p,q;
  printf("How many number: ");
  scanf("%d %d %d %d", &m,&n,&p,&q);
  for(iCounter=m;iCounter<=n;iCounter=iCounter+p)
   {
       sum+=pow(iCounter,q);

   }
   printf("%d", sum);
   return 0;


}

