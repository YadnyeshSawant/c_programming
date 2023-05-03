#include<stdio.h>
#define max(a,b) (a>b)?a:b
void main()
{
    int a,b,i;
    printf("Enter the value of a and b:\t");
    scanf("%d%d",&a,&b);
    i = max(a,b);
    printf("MAXIMUM NUMBER IS %d",i);
}
