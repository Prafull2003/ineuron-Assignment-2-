//  Write a program to make the last digit of a number stored in a variable as zero

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the number ");
    scanf("%d",&n);
    printf("After last digit zero the number is %d",(n/10)*10);
}