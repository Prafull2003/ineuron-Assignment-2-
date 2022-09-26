//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number

#include<stdio.h>
int main()
{
    int n,d;
    printf("\nEnter the number ");
    scanf("%d%d",&n,&d);

    n = n * 10 + d;

    printf("The resulting number is %d",n);

    return 0;
}