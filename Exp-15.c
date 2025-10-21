//WAP to generate the following set of output.
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
#include <stdio.h>

int main() 
{
    int rows = 5;
    int num = 1;

   
    for (int i = 0; i < rows; i++) 
    {
       
        for (int space = 1; space <= rows - i; space++) 
        {
            printf(" ");
        }

       
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0) 
            {
                num = 1;
            } else 
            {
                num = num * (i - j + 1) / j;
            }
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}
