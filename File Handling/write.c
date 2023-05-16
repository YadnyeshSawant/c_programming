#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int marks;
}s[10];
void main()
{
    int n,i;
    FILE *fp;
    fp = fopen("student.txt","r+");
    printf("Enter the number of entries\t");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the rollno\t");
        scanf("%d",&s[i].rollno);
        
        printf("Enter the namee\t");
        scanf("%s",s[i].name);
        
        printf("Enter the marks\t");
        scanf("%d",&s[i].marks);
    }
        fwrite(&s,sizeof(s),n,fp);
        printf("\n DATA WRITTEN SUCCESSFULLY....\n");
    for ( i = 0; i < n; i++)
    {
        fread(&s,sizeof(s),n,fp);

        printf("\nEnter the rollno\t%d\n",s[i].rollno);
        printf("Enter the namee\t%s\n",s[i].name);
        printf("Enter the marks\t%d\n",s[i].marks);
    }
    fclose(fp);
}

