#include<stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[30];
    float percentage;
};

int main()
{
    int i;
    struct student record[3];

    record[0].rollno = 3;
    strcpy(record[0].name, "navneet");
    record[0].percentage = 97;

    record[1].rollno = 9;
    strcpy(record[1].name, "baseer");
    record[1].percentage = 90;

    record[2].rollno = 6;
    strcpy(record[2].name, "baserat");
    record[2].percentage = 91.6;

    for (i = 0; i < 3; i++)
    {
        printf(" Records of STUDENT : %d \n", i + 1);
        printf(" Id is: %d \n", record[i].rollno);
        printf(" Name is: %s \n", record[i].name);
        printf(" Percentage is: %f\n\n", record[i].percentage);
    }
    return 0;
}
