//WAP to take check if the triangle is valid or not. If the validity is established, do
//check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the
//triangle as input from a user.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side lengths");
    }
    else if (a == b && b == c)
    {
        printf("The triangle is Equilateral");
    }
    else if (a == b || b == c || a == c)
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene");
    }
    return 0;
}
