#include <stdio.h>
#include <stdlib.h>

int main()
{
/** INT WILL NOT DISPLAY DECIMAL ANSWER THATS WHY AM MAKING USE OF DOUBLE
 * int num1;
 * int num2;
 * 
 * printf("Enter first numer: ");
 * scanf("%d", &num1);
 * 
 * printf("Enter second numer: ");
 * scanf("%d", &num2);
 * 
 * printf("Answer: %d, num1 + num2);
 */
    double num1;
    double num2;
    printf("Enter first numer: ");
        scanf("%lf", &num1);

    printf("Enter second numer: ");
        scanf("%lf", &num2);

  printf("Answer: %f", num1 + num2);




    return(0);
}