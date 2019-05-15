 #include<stdio.h>

 int main()
 {
     int i,n,a[100],l,s,r;

     printf("How many number for GCD : ");
     scanf("%d",&n);

     printf("\nEnter %d integer : ",n);
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);

     for(i=0;i<2;i++){

         if(a[i] > a[i+1]){
            s=a[i+1];
            l=a[i];
       }else{
        s=a[i];
        l=a[i+1];
        }

        while((l%s) != 0){
            r=l%s;
            l=s;
            s=r;
         }
 }

 for(i=2;i<n;i++){
         if((a[i]%s) == 0){
            s=s;
         }
         else{
         r=a[i]%s;
        a[i]=s;
        s=r;
          }

      }

 printf("\nGCD is : %d\n",s);

}
