 #include <stdio.h>

int main() {

 int m,n,i,k=0,j=0;

 scanf("%d %d",&m,&n);

 int a[m],b[n],c[m+n+2];

 for(i=0;i<m;i++)
    scanf("%d",&a[i]);

 for(i=0;i<n;i++)
    scanf("%d",&b[i]);

for(i=0;i<m;i++){
    c[k]=a[i];
    k++;
}

for(i=0;i<n;i++){
    c[k]=b[i];
    k++;
}

for(i=0;i<k;i++)
    printf("%d ",c[i]);


}


