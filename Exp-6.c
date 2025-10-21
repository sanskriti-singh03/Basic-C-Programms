//WAP a C program to Convert temperature from Celsius to Fahrenheit using the
//formula: F = (C * 9/5) + 32.
#include <stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("enter temperature in celcius:");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9/5)+32;
    printf("temperature in fahrenheit:%.2f",fahrenheit);
    return(0);
    
}
