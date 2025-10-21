//WAP using ternary operator, the user should input the length and breadth of a
//rectangle, one has to find out which rectangle has the highest perimeter. The
//minimum number of rectangles should be three.
#include <stdio.h>

int main() 
{
    float l1, w1, l2, w2, l3, w3;
    float p1, p2, p3;
    float max_perimeter;
    int max_rec;

    
    printf("Enter length and width for rectangle 1: ");
    scanf("%f %f", &l1, &w1);
    p1 = 2 * (l1 + w1);

    
    printf("Enter length and width for rectangle 2: ");
    scanf("%f %f", &l2, &w2);
    p2 = 2 * (l2 + w2);

    
    printf("Enter length and width for rectangle 3: ");
    scanf("%f %f", &l3, &w3);
    p3 = 2 * (l3 + w3);

   
    if (p1 > p2 && p1 > p3) {
        max_perimeter = p1;
        max_rec = 1;
    } else if (p2 > p3) 
    {
        max_perimeter = p2;
        max_rec = 2;
    } else 
    {
        max_perimeter = p3;
        max_rec = 3;
    }

   
    printf("\nThe highest perimeter (%.2f) belongs to Rectangle %d.\n", max_perimeter, max_rec);

    return 0;
}

