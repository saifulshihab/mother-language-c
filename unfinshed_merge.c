
#include<stdio.h>
int main(){
int i,m=0,n=0,x=0,y=0,ci;
printf("\nEnter A array size: ");
scanf("%d",&m);
printf("\nEnter B array size: ");
scanf("%d",&n);
int a[100],b[100],c[100],k=0,j=0;
printf("\nEnter A arrays elements: ");
for(i=0;i<m;i++)
    scanf("%d",&a[i]);
printf("\nEnter B arrays elements: ");
for(i=0;i<n;i++)
    scanf("%d",&b[i]);


while((i<m) && (j<n)){
    if(a[i]>b[j]){
        c[k]=b[j];
        j++;
        k++;
    }
    else{
         c[k]=a[i];
         i++;
         k++;
    }
}
if(i>m){
    for(x=i;x<n;x++){
        c[k]=b[x];
        k++;
    }
}
else{
for(y=i;y<m;y++){
    c[k]=a[y];
    k++;
}
}

printf("\n\nAfter merging two array:  ");
for(ci=0;ci<k;ci++)
    printf("%d ",c[ci]);
    printf("\n\n");
return 0;

}
