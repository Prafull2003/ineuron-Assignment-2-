// Write a program to check whether the given number is even or odd using a bitwise operator

#include<stdio.h>
int main()
{
    int n;
    printf("Enter tne number ");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("%d is Even number",n);
    }
    else
    {
        printf("%d is odd number",n);
    }

    return 0;
}