//Ramanujan Number is the smallest number that can be expressed as the sum of two
//cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
#include <stdio.h>

int main() 
{
    int limit = 20;
    int sum1, sum2;

    printf("Finding Ramanujan numbers up to a limit of %d...\n", limit);
    
    
    for (int i = 1; i <= limit; i++) 
    {
        for (int j = i + 1; j <= limit; j++) 
        {
            sum1 = i * i * i + j * j * j;
            
            for (int k = i; k <= limit; k++)
            {
                for (int l = k + 1; l <= limit; l++) 
                {
                    
                    if (i == k && j == l) 
                    {
                        continue;
                    }

                    sum2 = k * k * k + l * l * l;

                    if (sum1 == sum2) 
                    {
                        printf("Ramanujan Number: %d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, i, j, k, l);
                    }
                }
            }
        }
    }

    return 0;
}
