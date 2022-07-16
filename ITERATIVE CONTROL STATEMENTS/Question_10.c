//Write a program to print a table of 5.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        printf("\n");
        printf("5 X %d = %d.",i,(i*5));
    }
    return 0;
}