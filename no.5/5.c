//Write a program to input a three-digit number and display the sum of the digits

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the 3 digit number ");
    scanf("%d",&a);
    c=a%10;
    d=a/10;
    b=d%10;
    d=d/10;
    a=d+b+c;
    printf("Sum of the digit is %d",a);
    
}