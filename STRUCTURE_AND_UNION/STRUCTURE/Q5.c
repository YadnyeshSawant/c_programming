#include<stdio.h>
#define area(x) 3.14*x*x
void main()
{
    int r,a;
    printf("Enter the radius \t");
    scanf("%d",r);
    a = area(r);
    printf("AREA = %d",a);
}