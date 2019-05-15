#include<stdio.h>
    struct stud{
    char name[20];
    char id[20];
    float age;
    float salary;
    }s;
    /* add()
{
        FILE *ad;
    ad=fopen("info.txt","a");
    printf("Enter Student Name: ");
    scanf("%s",&s.name);
    printf("Student ID: ");
    scanf("%s",&s.id);
    printf("Student Age: ");
    scanf("%f",&s.age);
    printf("Student Salary: ");
    scanf("%f",&s.salary);
    fwrite(&s,sizeof(s),1,ad);
    fclose(ad);
}*/
 search()
{
    FILE *srch;
    srch=fopen("info.txt","r");
    char nm[20];
    printf("Enter new name: ");
    scanf("%s",&nm);
    while(fread(&s,sizeof(s),1,srch)){
        if(strcmp(nm,s.name)==0)
            printf("Student Name: %s\n ID: %s\n Age: %.0f\n Salary: %.0f\n",s.name,s.id,s.age,s.salary);
    }
    fclose(srch);
}
 main()
{
     /*add();*/
     search();
}
