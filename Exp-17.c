//The population of a town is 100000. The population has increased steadily at the rate
//of 10% per year for the last 10 years. Write a program to determine the population at
//the end of each year in the last decade.
#include <stdio.h>

int main() 
{
    float current_population = 100000.0;
    float rate = 0.10; // 10% increase

    printf("Population at the beginning of each of the last 10 years:\n");
    printf("------------------------------------------------------\n");

    
    for (int year = 10; year >= 1; year--) 
    {
       
        current_population = current_population / (1 + rate);
        printf("Year %2d: %10.2f\n", year, current_population);
    }

    return 0;
}
