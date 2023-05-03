#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i,n,a;
    // printf("ENTER THE NUMBER OF ARGUMENTES PASSED :\t");
    // scanf("%d",&n);
    for (i=argc;i=1;i--)
    {
        a = atoi(argv[i]);
        printf("%d\n",a);
    }
    return 0;
}