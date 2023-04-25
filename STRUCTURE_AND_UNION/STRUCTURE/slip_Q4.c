#include<stdio.h>
struct student
{
    int rno;
    char name[50];
    int marks_sub1;
    int marks_sub2;
    int marks_sub3;
    int percentage;
}S[10];
void main()
{
    int n,i;
    printf("ENTER THE NUMBER OF ENTRIES:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER ROLLNO:\t");
        scanf("%d",S[i].rno);
        printf("ENTER NAME:\t");
        scanf("%d",S[i].name);
        printf("ENTER MARKS OF SUBJECT 1:\t");
        scanf("%d",S[i].marks_sub1);
        printf("ENTER MARKS OF SUBJECT 2:\t");
        scanf("%d",S[i].marks_sub2);
        printf("ENTER MARKS OF SUBJECT 3:\t");
        scanf("%d",S[i].marks_sub3);
        S[i].percentage = S[i].marks_sub1+S[i].marks_sub2+S[i].marks_sub3/3;
    }
    printf("STUDENT DETAILS:\n");
    printf("ROLLNO\tNAME\tMARKS OF SUBJECT 1\tMARKS OF SUBJECT 2\tMARKS OF SUBJECT 3\tPERCENTAGE");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d",S[i].rno,S[i].name,S[i].marks_sub1,S[i].marks_sub2,S[i].marks_sub3,S[i].percentage);
    }
}
