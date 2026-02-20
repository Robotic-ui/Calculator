#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    while (1)
    {
        printf("\nEnter an operator (+, -, *, /) or q to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q')
        {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator)
        {
            case '+':
                result = num1 + num2;
                break;

            case '-':
                result = num1 - num2;
                break;

            case '*':
                result = num1 * num2;
                break;

            case '/':
                if (num2 != 0)
                {
                    result = num1/num2;
                }
                else
                {
                    printf("Error! Divided by zero.\n");
                    continue;
                }
                break;

            default:
                printf("Invalid operator!\n");
                continue;
        }

        printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    }

    return 0;
}