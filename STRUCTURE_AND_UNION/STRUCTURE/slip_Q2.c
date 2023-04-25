#include<stdio.h>
#include<string.h>
struct employee
{
    int empno;
    char ename[50];
    int salary;
}emp[50];
void main()
{
    int n,i;
    printf("ENTER THE NUMBER OF ENTERIES");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("ENTER THE EMPLOYEE NO:       \t");
        scanf("%d",&emp[i].empno);
        printf("ENTER THE NAME OF EMPLOYEE:  \t");
        scanf("%s",emp[i].ename);
        printf("ENTER THE SALARY OF EMPLOYEE:\t");
        scanf("%d",&emp[i].salary);
    }

    printf("\nEMPLOYEE DETAILS:---------------------------------------\n");
    printf("\n\nEMPLOYEE_NO\tEMPLOYEE_NAME\tSALARY\n");
    printf("------------------------------------------------------\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n",emp[i].empno,emp[i].ename,emp[i].salary);
    }
    
}
    // for ( i = 0; i < n; i++)
    // {
    //     printf("%d\t\t%s",emp[i].empno,emp[i].ename);
    //     if(strlen(emp[i].ename)<16||strlen(emp[i].ename)>16){
    //         printf("\t  \n",emp[i].salary);
    //     }
    //     printf("\t\t%s\n",emp[i].salary);
    // }
