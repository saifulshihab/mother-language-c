  #include<stdio.h>
 int main()
 {
     int a[100],length[100],y[100],i,n,j,x,c=0,h=0,t=0;

     printf("Enter array size: ");
     scanf("%d",&n);

     printf("Enter array %d elements: ",n);
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++){
           length[i]=1;
           y[i]=1;
        }

        printf("\n");
        for(i=0;i<n;i++){
            printf("[%d]\t",a[i]);
        }
        printf("\n\n");

        for(j=0;j<n;j++)
            printf(" %d\t",length[j]);

  for(i=1;i<n;i++){

            printf("\n\n");
            for(x=0;x<=t;x++){
                 printf(" \t");
            }
        t++;

     while(c < i){
             if(a[i] > a[c]){
             x=length[c]+y[i];
             if(x>y[i] && x>length[i])
                length[i]=x;
             }

                c++;
        }
            for(j=i;j<n;j++)
         printf(" %d\t", length[j]);

         c=0;
     }

   for(x=0;x<n;x++){

if(length[x]>h)
    h=length[x];
}
     printf("\nLength of LIS is: %d\n\n",h);


 }





