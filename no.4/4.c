//Write a program to swap values of two int variables without using a third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    printf("\nBefore sawpping\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping\na=%d\nb=%d\n",a,b);
}