#include<stdio.h>
int main()
{
    printf( "program is to print 1 to 10 using a do-while loop...\n");

    int a=1;

    do {
        printf("%d\n",a);
        a++;
        
    }while(a<=10);
    return 0;
}