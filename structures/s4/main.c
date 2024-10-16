#include <stdio.h>
#include <stdlib.h>

int main()
{
 struct student{
 char name[20];
 int roll;
 float percent;
 char branch[10];
 };
 struct student s[2];
 int i;
 for(i=0;i<2;i++)
 {
     printf("\n enter student details:");
     scanf("%s%d%f%s",s[i].name,&s[i].roll,&s[i].percent,s[i].branch);
 }
 printf("\nenter a branch:");
 scanf("%s",s[i].branch);
 printf("list of students in specific branch\n");
 for(i=0;i<2;i++)
{
    if(strcmp(s[i].branch,s[i].branch)==0);
    printf("%s%d%f",s[i].name,s[i].roll,s[i].percent);
}
return 0;
}
