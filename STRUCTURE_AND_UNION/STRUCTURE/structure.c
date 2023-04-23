#include<stdio.h>
#include<string.h>
struct student
{
    int rno;
    char name[50];
    char add[50];
    int per;
    int age;
}S[50];
void main()
{
    int n,i;
    printf("Enter the number of entries:\n");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
    printf("Enter rollno:\t");
    scanf("%d",&S[i].rno);

    printf("Enter name:\t");
    scanf("%s",S[i].name);
    
    printf("Enter address:\t");
    scanf("%s",S[i].add);
    
    printf("Enter percentage:\t");
    scanf("%d",&S[i].per);
    
    printf("Enter age:\t");
    scanf("%d",&S[i].age);
    }
    printf("STUDENT DETAILS\n");
    printf("----------------------------------------\n");
    printf("ROLLNO\tNAME\tADDRESS\tPERCENTAGE\tAGE\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%d\t%d\n",S[i].rno,S[i].name,S[i].add,S[i].per,S[i].age);
    }
    
}
    //THIS IS THE COMMENT OUT CODE DONOT REFER THIS!!!

    // for ( i = 0; i < n; i++)
    // {
    // printf("%d\t\t\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",S[i].rno,S[i].name,S[i].add,S[i].per,S[i].age);
        // printf("%d\t",S[i].rno);
        //     if(strlen(S[i].name)>16)
        //     {
        //         printf("\t\t%s",S[i].name);
        //     }
        // This is another way...
        // printf("%s\t\t\t%d\t\t\t%d\n",S[i].add,S[i].per,S[i].age);
        //  printf("%d\t",S[i].rno);
        //     if(strlen(S[i].name)>16)
        //     {
        //         printf("\t\t");
        //     }
        //     printf("%s\t\t\t%s",S[i].name,S[i].add);
        // printf("\t\t\t%d\t\t\t%d\n",S[i].per,S[i].age);
    // }
