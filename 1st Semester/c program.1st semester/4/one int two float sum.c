//4. Write a C program to find the sum of one integer number and two float number.

#include<stdio.h>
int main()
{
    int num1;
    printf("The first number int: ");
    scanf("%d",&num1);

    float num2,num3,sum;
    printf("The second number float: ");
    scanf("%f",&num2);
    printf("The third number float: ");
    scanf("%f",&num3);

    sum = num1+num2+num3;
    printf("The summation is: %f",sum);
}
