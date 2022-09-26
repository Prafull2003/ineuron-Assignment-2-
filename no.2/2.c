// Write a program to print a given number without its last digit

#include<stdio.h>
int main()
{
    int num,a;
    printf("Enter the number");
    scanf("%d",&num);

    if(num >= 10)
    {
    num=num/10; 
    }
    
    printf("Your value is %d ",num);
}