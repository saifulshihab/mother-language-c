#include<stdio.h>
int main(){
int i,n,ID;
char name[10];
FILE *fptr;
fptr=fopen("Student.txt","a");
if(fptr==NULL){
printf("Error !!");
exit(1);
}
printf("How many Student?\n");
scanf("%d", &n);
for(i=0;i<n;i++){
    printf("Enter student %d Name & ID\n",i+1);
scanf("%s%d",&name,&ID);
printf("Name: %s\nID: %d\n",name,ID);
fprintf(fptr,"\nStudent %d\nName: %s\nID: %d\n",i+1,name,ID);
}
fclose(fptr);
return 0;
}
