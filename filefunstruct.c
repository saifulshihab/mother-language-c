#include<stdio.h>
    FILE *records;
struct emp{
char name[20];
int id,salary,age;
};
struct emp E;
int add(){
    printf("Enter employee   name   id   salary    age\n");
scanf("%s%d%d%d",&E.name,&E.id,&E.salary,&E.age);
    records=fopen("D:\\info.txt","w");
    if(records != NULL){
        fprintf(records,"%s\n%d\n%d\n%d\n",E.name,E.id,E.salary,E.age);
    }
    else{
        printf("Error");
    }
    fclose(records);
}
int main()
{
    add();
}
