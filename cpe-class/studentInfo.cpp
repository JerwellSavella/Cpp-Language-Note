#include <stdio.h>

//Create a program that will display the Name, Year, schedule and section of an engineering student


int main(void)
{
    char name[100];
    char year[100];
    char schedule[100];
    char section[100];

    printf("Enter your name: ");
    scanf(" %[^\n]s", name);
    printf("Enter your year: ");
    scanf(" %[^\n]s", year);
    printf("Enter your schedule: ");
    scanf(" %[^\n]s", schedule);
    printf("Enter your section: ");
    scanf(" %[^\n]s", section);

    printf("Your Name is: %s", name);
    printf("\n");
    printf("Your Year is: %s", year);
    printf("\n");
    printf("Your Schedule is: %s", schedule);
    printf("\n");
    printf("Your section is: %s", section);

    return 0;
}