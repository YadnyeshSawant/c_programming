#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    if(atoi(argv[0]) < 3)
        printf("\nERROR LESS NUMBER OF ARGUMENTS PASSED\n");
        // exit(0);  ....DONT WRITE THIS LINE.....
    if(a>b && a>c)
        printf("A = %d is maximum",a);
    else if (b>a && b>c)
        printf("B = %d is maximum",b);
    else
        printf("C = %d is maximum",c);
    
    return 0;
}