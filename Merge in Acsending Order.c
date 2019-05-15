#include<stdio.h>
int main()
{
    int m=0,n=0,i=0,j=0,k,x,y,a[100],b[100],c[100],p;

    printf("Enter 1st array size : ");
    scanf("%d",&m);
    printf("Enter 2nd array size : ");
    scanf("%d",&n);


    printf("Enter 1st array %d elements : ",m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);


    printf("Enter 2nd array %d elements : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    while(i<=m && j<=n){

        if(a[i] > b[j]){
            c[k] = b[j];
            j++;
            k++;
        }else{

        c[k] = a[i];
        i++;
        k++;
        }

    }
        if(i>m){
            for(x=j;x<n;x++){
                c[k] = b[x];

            }
        }else{
        for(y=i;y<m;y++){
            c[k] = a[y];

        }
        }


printf("Resultant array is : ");

for(p=0;p<k;p++)
    printf("%d ",c[p]);


}
