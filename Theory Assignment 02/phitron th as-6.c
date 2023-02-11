#include <stdio.h>

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

double ratio_of_factorials(int num1, int num2)
{
    return (double)factorial(num1) / factorial(num2);
}

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("The ratio of the factorials is: %lf\n", ratio_of_factorials(num1, num2));

    return 0;
}

