#include <stdio.h>

int main()
{

    // Declare integer variable 'num'
    int num;

    // Integer input from user
    printf("Enter a positive integer: ");
    // Read value of user integer input, store in variable 'num'
    scanf("%d", &num);

    // IF statement checks integer input from user is prime
    if (num > 1 && (num == 2 || num == 3 || num == 5 || num == 7 ||
       (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0)))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}