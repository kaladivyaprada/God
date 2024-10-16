#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student
    {

        char name[10];
        int roll;
        int marks[2];
    };
    struct student s;
    int i,sum=0;
    printf("\n Enter the details of a student:");
    scanf("%s%d",s.name,s.roll);
    for(i=0;i<=2;i++)
    {

        scanf("%",s.marks[i]);
        sum=sum+s.marks[i];
    }
    printf("\n The student details are:");
    printf("\n name=%s",s.name);
    printf("\n roll=%d",s.roll);
    printf("\n sum of marks=%d",sum);
    return 0;
}
