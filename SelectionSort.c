  #include<stdio.h>
int main()
{
    int a[100],i,n,j,min,temp,x,k =0;

    printf("Enter the array size: ");
    scanf("%d",&n);

    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

     for(i=0;i<n-1;i++){
              min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        printf("pass %d : ",k);
        for(x=0;x<n;x++)
        {
            printf("%d ",a[x]);
        }
         printf("\n");
         k++;
    }
    printf("\n");
    printf("Selection sort: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
