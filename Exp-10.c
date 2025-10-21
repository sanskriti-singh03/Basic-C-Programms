//According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year
//is input through the keyboard write a program to find out what is the day on 1st
//January of this year.
#include <stdio.h>

int main()
 {
    int year, total_days, day_of_week;
    printf("Enter a year after 01: ");
    scanf("%d", &year);
    total_days = 0;
    for (int i = 1; i < year; i++) 
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
        {
           
            total_days += 366;
        } else 
        {
            
            total_days += 365;
        }
    }
    day_of_week = total_days % 7;
    printf("On January 1st, %d, the day of the week was ", year);
    switch (day_of_week) 
    {
        case 0:
            printf("Monday.\n");
            break;
        case 1:
            printf("Tuesday.\n");
            break;
        case 2:
            printf("Wednesday.\n");
            break;
        case 3:
            printf("Thursday.\n");
            break;
        case 4:
            printf("Friday.\n");
            break;
        case 5:
            printf("Saturday.\n");
            break;
        case 6:
            printf("Sunday.\n");
            break;
    }

    return 0;
}
