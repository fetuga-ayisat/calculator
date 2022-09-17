#include <stdio.h>

int main()
{
        float num1, num2, result;
        char op;

        printf("Enter the First number\n");
        scanf("%f", &num1);

        printf("Enter the operation\n");
        scanf(" %c", &op);

        printf("Enter the Second number\n");
        scanf("%f", &num2);

        switch (op)
        {
        case '-':
                result = num1 - num2;
                printf("%f", result);
                break;

        case '+':
                result = num1 + num2;
                printf("%f", result);
                break;

        case '/':
                result = num1 / num2;
                printf("%f", result);
                break;

        case '*':
                result = num1 * num2;
                printf("%f", result);
                break;

        default:
        printf("The operator is not valid");
                break;
        }
        return 0;
}