#include<stdio.h>
int main()
{

    int num1, num2, num3, result;
    char op1, op2;

    scanf("%d %c %d %c %d",&num1,&op1,&num2,&op2,&num3);

    if (op1 == '+' && op2 == '+')result = num1 + num2 + num3;
    else if (op1 == '-' && op2 == '-')result = num1 - num2 - num3;
    else if (op1 == '*' && op2 == '*')result = num1 * num2 * num3;
    else if (op1 == '/' && op2 == '/')result = num1 / num2 / num3;
    else if (op1 == '+' && op2 == '-')result = num1 + num2 - num3;
    else if (op1 == '-' && op2 == '+')result = num1 - num2 + num3;
    else if (op1 == '+' && op2 == '*')result = num1 + num2 * num3;
    else if (op1 == '*' && op2 == '+')result = num1 * num2 + num3;
    else if (op1 == '+' && op2 == '/')result = num1 + num2 / num3;
    else if (op1 == '/' && op2 == '+')result = num1 / num2 + num3;
    else if (op1 == '-' && op2 == '*')result = num1 - num2 * num3;
    else if (op1 == '*' && op2 == '-')result = num1 * num2 - num3;
    else if (op1 == '-' && op2 == '/')result = num1 - num2 / num3;
    else if (op1 == '/' && op2 == '-')result = num1 / num2 - num3;
    else if (op1 == '*' && op2 == '/')result = num1 * num2 / num3;
    else if (op1 == '/' && op2 == '*')result = num1 / num2 * num3;

    printf("%d\n", result);

    return 0;
}
