#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int result;
    
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    printf("Input the third number: ");
    scanf("%d", &num3);
    //divide and times
    result = num1 / num2 * num3;
    printf("\n%d divide %d * %d is %d", num1, num2,num3, result);
    
}