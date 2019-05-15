
#include <time.h>
#include <stdio.h>

int main()
{
        char temp[100];
        time_t current_time = time(NULL);
        struct tm *tm = localtime(&current_time);
        strftime(temp, sizeof(temp), "%c", tm);
        printf("\nCurrent Date and Time:\n");
        printf("\n%s\n\n", temp);
        char month[12],day[31],year[3000];
        printf("Enter a day you want to go :");
        scanf("%c%c%c",&month,&day,&year);
        printf("Remaining time: %c",temp-month,temp-day,temp-year);

        return 0;
}












/*
#include <time.h>
#include <stdio.h>

int main()
{
        time_t current_time = time(NULL);
        struct tm *tm = localtime(&current_time);
        printf("\nCurrent Date and Time:\n");
        printf("%s\n", asctime(tm));
        return 0;
}
*/
