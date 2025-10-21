//WAP to enter numbers till the user wants. At the end, it should display the count of
//positive, negative, and Zeroes entered.
#include <stdio.h>

int main() 
{
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int number;
    char choice;

    do 
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0) 
        {
            positive_count++;
        } else if (number < 0) 
        {
            negative_count++;
        } else 
        {
            zero_count++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\n--- Summary ---\n");
    printf("Positive numbers entered: %d\n", positive_count);
    printf("Negative numbers entered: %d\n", negative_count);
    printf("Zeros entered: %d\n", zero_count);

    return 0;
}
