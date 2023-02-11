/*Assume that you have a function named add_three_nums() which will take three numbers as arguments. The description of the function is also given here. Just copy it and paste it in your code.
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
Now, write a C program where you will take only two inputs and add those two numbers using this function. You can add them directly using the + operator. You must use this function to add them, but the challenge is you are only given two inputs.
*/
#include <stdio.h>

int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = add_three_nums(num1, num2, 0);
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

