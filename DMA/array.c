#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[50], n,i,*ptr;
    printf("Enter the size of the array");
    scanf("%d",&n);
    ptr =(int*)malloc(n*sizeof(int));
    ptr = &a[0];
    for ( i = 0; i < n; i++)
    {
        printf("Enter Element");
        scanf("%d",ptr);
        ptr++;
    }
    printf("Entered array elements\n");
    ptr = &a[0];
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    
}