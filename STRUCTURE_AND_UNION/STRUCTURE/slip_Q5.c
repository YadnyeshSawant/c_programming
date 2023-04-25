#include<stdio.h>
struct student
{
    int rno;
    char name[50];
    int percentage;
}S[10];
void main()
{
    int n,i,max;
    printf("ENTER THE NUMBER OF ENTRIES:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER ROLLNO:\t");
        scanf("%d",S[i].rno);
        printf("ENTER NAME:\t");
        scanf("%d",S[i].name);
        printf("ENTER PERCENTAGE:\t");
        scanf("%d",S[i].percentage);
    }
    printf("DETAILS OF STUDENT WHO HAS MAX MARKS:\n");
    printf("ROLLNO\tNAME\tPERCENTAGE\n");
    max = S[0].percentage;
    for(i=0;i<n;i++)
    {
        if (S[i].percentage > max)
            max = S[i].percentage;
        
    }
    for ( i=0; i<n; i++)
    {
        if(S[i].percentage == max)
            printf("\n%d\t%s\t%d",S[i].rno,S[i].name,S[i].percentage);
    }
}