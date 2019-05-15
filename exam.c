 #include<stdio.h>
int main ()
{
    int a[100],b[100],c[100],i,j=0,k=0,n,m,h=0;

   scanf("%d",&m);
   for(i=0;i<m;i++)
    scanf("%d",&a[i]);

    int beg=0,end=m-1;
   int  mid = (beg+end)/2;



   for(i=beg;i<=mid;i++)

{



        c[k]=a[i];
        k++;
    }

    for(i=mid+1;i<=end;i++){
        b[j]=a[i];
        j++;
    }


    printf("Spilt 1: ");
    for(i=0;i<k;i++){
            if(c[i] > h){
                h=c[i];
            }
        printf("%d ",c[h]);
    }

        printf("\nSpilt 2: ");
         for(i=0;i<j;i++)
        printf("%d ",b[i]);


}
