
#include<stdio.h>

int main()
{
    int beg,end,mid,a[100],item,i,n;
    char b;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("\nEnter array %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\nEnter a element to search: ");
        scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;

   if(item>a[mid]){
       b='T';
    }
    else{
      b='F';
    }

    printf("\nBeg\tEnd\tMid\tData[mid]\tITEM>Data[mid]?");
    printf("\n %d\t %d\t %d\t   %d\t             %c",beg,end,mid,a[mid]),b;
    while(beg<=end){
         if(item > a[mid])
            beg=mid+1;
         else if(item == a[mid]){
            printf("\n\nITEM found in %d position.\n\n\n",mid);
            break;
         }
         else
            end=mid-1;
         mid =(beg+end)/2;

   if(item>a[mid]){
       b='T';
    }
    else
      b='F';

     printf("\n %d\t %d\t %d\t   %d\t             %c",beg,end,mid,a[mid],b);
    }


    if(beg>end)
        printf("\n\nItem is not found !!\n\n\n");

        return 0;
}

