#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[50], n,i,*ptr,sum=0,avg;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter Element:\t");
        scanf("%d",&a[i]);
        ptr++;
    }
    ptr = &a[0];
    for(i=0;i<n;i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    avg = sum/n;
    printf("sum = %d",sum);
    printf("avg = %d",avg);
}