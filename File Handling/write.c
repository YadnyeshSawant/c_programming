#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int marks;
}s;
void main()
{
    int n,i;
    FILE *fp;
    fopen("student.txt","w");
    printf("Enter the number of entries\t");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the rollno\t");
        scanf("%d",&s.rollno);
        
        printf("Enter the namee\t");
        scanf("%s",s.name);
        
        printf("Enter the marks\t");
        scanf("%d",&s.marks);
    }
    fwrite(&s,sizeof(s),1,fp);
    printf("\n DATA WRITTEN SUCCESSFULLY....");
    fclose(fp);
}

