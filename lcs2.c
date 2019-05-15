
#include<stdio.h>
#include<string.h>

int main()
{

char x[100],y[100];
int i,j,xz,c,k,b=0,h=0,u=0,p=0,l[100],l2[100];

printf("Enter 1st String : ");
scanf("%s",x);
printf("Enter 2nd String : ");
scanf("%s",y);

for(i=0;i<strlen(x);i++){
    b++;
}

for (i=0;i<strlen(x);i++){
    l[i]=0;
}
for (i=0;i<strlen(y);i++){
    l2[i]=0;
}


       for(i=0;i<strlen(x);i++){


            while(u<strlen(y)){
                    if(y[i] == x[u]){
                xz = l[u-1]+1;
                l2[p]=xz;
                 l[u] = xz;
                    }
            else{
                     if(l2[p] > l[u])
                l[u] = l2[p];
            }


         u++;
       }

 u=0;
 l2[p]=0;

  for(c=0;c<b;c++){
                printf("%d  ",l[c]);
            }
printf("\n\n");
       }


            for(i=0;i<b;i++){
        if(l[i] > h){
            h=l[i];
        }
       }
printf("\n\nNumber of matching element : %d\n\n",h);

}

