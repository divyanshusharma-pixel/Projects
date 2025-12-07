#include <stdio.h>

int main() {
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of first subject: ");
    scanf("%d",&sub1);
    printf("Enter marks of second subject: ");
    scanf("%d",&sub2);
    printf("Enter marks of third subject: ");
    scanf("%d",&sub3);
    printf("Enter marks of fourth subject: ");
    scanf("%d",&sub4);
    printf("Enter marks of fifth subject: ");
    scanf("%d",&sub5); 
    int totalMarks = sub1+sub2+sub3+sub4+sub5;
    float per = totalMarks/5;
    printf("Total Marks = %d\n",totalMarks);
    printf("percantage=%f",per);
    return 0;
}