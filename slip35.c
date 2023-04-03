#include <stdio.h>
void main() {
    int a[10][10], t[10][10],r,c,i,j;
    printf("Enter the rows and columns");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter any number");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matix before transpose\n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
            printf("\t\n");
    }
    printf("calculating transpose");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            t[j][i] = a[j][i];
        }
            printf("\t\n");
    }
    printf("after transpose\n");
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",t[i][j]);
        }
            printf("\t\n");
    }
}