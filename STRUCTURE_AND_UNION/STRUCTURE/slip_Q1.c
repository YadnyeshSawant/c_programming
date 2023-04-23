#include<stdio.h>
struct item
{
    int code;
    char name[50];
    int price;
}I[50];
void main()
{
    int n,i;
    printf("ENTER TEH NUMBER OF ENTRIES: \t");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("ENTER THE ITEM CODE: \t");
        scanf("%d",&I[i].code);
        printf("ENTER THE NAME OF THE ITEM: \t");
        scanf("%s",I[i].name);
        printf("ENTER THE PRICE OF THE ITEM: \t");
        scanf("%d",&I[i].price);
    }

    printf("ITEM DETAILS:---------------------------------------\n");
    printf("CODE\tNAME\tPRICE\n");
    printf("------------------------------------------------------\n");

    for ( i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n",I[i].code,I[i].name,I[i].price);
    }
}
