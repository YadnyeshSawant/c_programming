//to interchange the integers
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    
    temp = a;
    a = b;
    b = temp;
    printf("new value of a is %d",a);
    printf("\nnew value of b is %d",b);
    
    return 0;
}