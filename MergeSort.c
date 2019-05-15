
#include<stdio.h>
int main()
{
    int a[100],n,i,low,k,j,b[100],y,mid,high;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter arrays %d elements : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(low<high){
            mid=(high+low)/2;

        }
  Merge();


    }







}
  Merge()
        {
                int a[100],n,i,low,k,j,b[100],y,mid,high;

            i=low;j=mid+1;k=0;
            while((i<=mid) && (j<=high)){
                if(a[i]>a[j]){
                    b[k]=a[j];
                    j++;
                    k++;
                }
                else{
                    b[k]=a[i];
                    i++;
                    k++;
                }
            }
            if(i>mid){
                for (y=j;y<=high;y++){
                    b[k]=a[y];
                    k++;
                }
            }
            else{
                for(y=i;y<=mid;y++){
                    b[k]=a[y];
                    k++;
                }
            }
            for(i=low;i<=high;i++){
                a[i]=b[i];
            }
            printf("Arrat: ");
            for(i=low;i<=high;i++)
                printf("%d ",a[i]);
        }
