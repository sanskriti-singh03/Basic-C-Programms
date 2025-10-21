WAP to generate the following set of output.
//a.
//1
//2 3
//4 5 6
#include <stdio.h>

int main()
 {
    int rows = 3;
    int number = 1;

    
    for (int i = 1; i <= rows; i++) 
    {
        
        for (int j = 1; j <= rows - i; j++) 
        {
            printf(" ");
        }

       
        for (int k = 1; k <= i; k++) 
        {
            printf("%d ", number);
            number++;
        }
        
      
        printf("\n");
    }

    return 0;
}
