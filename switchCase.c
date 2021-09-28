#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    switch (age)
    {
    case 10:
        printf("Your are 10 years old");
        break;
    case 20:
        printf("Your are 20 years old");
        break;
    case 30:
        printf("Your are 30 years old");
        break;
    
    default:
        printf("Your age is not in the list");
        break;
    }
}
