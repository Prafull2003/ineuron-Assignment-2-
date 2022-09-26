//Write a program to find the position of first 1 in LSB

#include <stdio.h>
int main()
{
    int n, R, c = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    while (n != 0)
    {
        R = n & 1;
        c++;
        if (R == 1)
        {
            printf("Position of first 1 in LSB = %d", c);
            break;
        }
        n = n >> 1;

    }
    return 0;
}