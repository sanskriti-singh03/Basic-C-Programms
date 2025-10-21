//WAP to compute the BMI Index of the person and print the BMI values as per the
//following ranges. You can use the following formula to compute BMI=
//weight(kgs)/Height(Mts)*Height(Mts).
//BMI
//Starvation <15
//Anorexic 15.1 to 17.5
//Underweight 17.6 to 18.5
//Ideal 18.6 to 24.9
//Overweight 25 to 25.9
//Obese 30 to 39.9
//Morbidity Obese 40.0 above
#include <stdio.h>
int main()
{
    float height,weight,bmi;
    printf("Enter your height in meters:");
    scanf("%f", &height);

    printf("enter your weight in kilogram: ");
    scanf("%f", &weight);

    bmi = weight /(height * height);
    printf("Your BMI is: %.2f\n", bmi);
if ( bmi < 15) 
{
printf("starvation\n");
} else if ( bmi >=15.1 && bmi <=17.5 )
{
printf( "anorexic\n");
} else if (bmi >= 17.6 && bmi < 18.5) 
{
printf("Underweight\n");
} else if (bmi >= 18.5 && bmi < 25) 
{
printf("Ideal\n");
} else if (bmi >= 25 && bmi < 30) 
{
printf("Overweight\n");
} else 
{
printf("Obese\n");
}
return 0;

}
