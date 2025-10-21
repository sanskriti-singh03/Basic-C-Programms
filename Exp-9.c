//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
int points (int x1, int y1, int x2, int y2, int x3, int y3) 
{
int formula = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
if (formula == 0) 
{
return 1;
} else 
{
return 0;
}
}
int main() 
{
int x1, y1, x2, y2, x3, y3;
printf("Enter coordinates of point 1 (x1 y1): ");
scanf("%d %d", &x1, &y1);
printf("Enter coordinates of point 2 (x2 y2): ");
scanf("%d %d", &x2, &y2);
printf("Enter coordinates of point 3 (x3 y3): ");
scanf("%d %d", &x3, &y3);
if (points(x1, y1, x2, y2, x3, y3)) 
{
printf("The three points are collinear.\n");
} else 
{
printf("The three points are not collinear.\n");
}
return 0;
}
