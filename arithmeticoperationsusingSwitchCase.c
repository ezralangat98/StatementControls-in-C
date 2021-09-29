#include<stdio.h>
int main(){

    //Declaring Variables
    int num1, num2, result;
    char operator;

    //Prompting user to enter the Expression 
    printf("Enter your Expression (e.g 1+2): ");
    scanf(" %d %c %d", &num1, &operator, &num2);

    //Showing the operation
    printf(" Your operation is: %d%c%d", num1, operator, num2);
    //Performing Operations and Printing results
    switch (operator) {

        case '+':result = num1 + num2;
            printf("\nResults of Addition of two numbers is: %d\t", result);
            break;
        case '*':result = num1 * num2;
            printf("\nResults of Multiplication of two numbers is: %d\t", result);
            break;
        case '-':result = num1 - num2;
            printf("\nResults of Subtraction of two numbers is: %d\t", result);
            break;
        case '/':result = num1 / num2;
            printf("\nResults of Divion of the two numbers is: %d\t", result);
            break; 
        case '%':result = num1 % num2;
            printf("\nResults of Modulus of the two numbers is: %d\t", result);
            break; 
        default:
            printf("\nInvalid expression");

    }

    return 0;
}