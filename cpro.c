#include<stdio.h>
    struct stud{
    char name[20];
   char id[20];
   float age;
   float salary;

    }s;
    add(){
    FILE *student;
    student=fopen("rt.txt","a");
    printf("Enter Student name id age salary\n");
    scanf("%s%s%f%f",&s.name,&s.id,&s.age,&s.salary);
    fwrite(&s,sizeof(s),1,student);
    fclose(student);
}
search()
{
    FILE *fp1;
    fp1=fopen("rt.txt","r");
    char nm[20];
    printf("Enter new name:\n");
    scanf("%s",&nm);
    while(fread(&s,sizeof(s),1,fp1)){
        if(strcmp(nm,s.name)==0)
            printf("%s\n%s\n%.1f\n%.1f\n",s.name,s.id,s.age,s.salary);
    }
    fclose(fp1);
}
main()
{
   search();
    return 0;
}
