//Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping\na=%d\nb=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping\na=%d\nb=%d",a,b);

}