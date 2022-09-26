//Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    char charType;
    double doubleType;

    printf("\nsize of int : %d",sizeof(int));
    printf("\nsize of float : %d",sizeof(float));
    printf("\nsize of char : %d",sizeof(char));
    printf("\nsize of double : %d",sizeof(double));

    return 0;
}


