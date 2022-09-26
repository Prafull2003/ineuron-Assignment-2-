// Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{

  int num,a;
  printf("Enetr the number ");
  scanf("%d",&num);
  a=num%10;
  printf("Your unit digit is %d ",a);

  return 0;

}