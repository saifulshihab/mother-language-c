


#include<stdio.h>

int main()
{

    int a[100],b[100],l[100],l2[100],i,x,c,u=0,p=0,h=0,n,m;

    printf("Enter 1st array size: ");
    scanf("%d",&n);
    printf("Enter 1st array %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    printf("Enter 2nd array size: ");

    scanf("%d",&m);
    printf("Enter 2nd array %d elements: ",m);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);


printf("\n\n");

    for(i=0;i<n;i++)
        l[i]=0;
    for(i=0;i<m;i++)
        l2[i]=0;

       for(i=0;i<m;i++){


            while(u<n){
                    if(b[i] == a[u]){
                x = l[u-1]+1;
                l2[p]=x;
                 l[u] = x;
                    }
            else{
                     if(l2[p] > l[u])
                l[u] = l2[p];
            }


         u++;
       }

 u=0;
 l2[p]=0;

  for(c=0;c<n;c++){
                printf("%d  ",l[c]);
            }
printf("\n\n");
       }


       for(i=0;i<n;i++){
        if(l[i] > h){
            h=l[i];
        }
       }
printf("\n\nNumber of matching element : %d\n\n",h);
}

