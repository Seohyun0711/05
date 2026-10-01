#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("enter the calculation: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            printf("%d+%d=%d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d-%d=%d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d*%d=%d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf("%d/%d=%d\n", num1, num2, num1 / num2);
            }
            else
            {
                printf("Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}