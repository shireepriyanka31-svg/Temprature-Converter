#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F,K;
    printf("Enter the Temprature(in Celsius): ",C);
    scanf("%f",&C);
    F=(C*9/5)+32;
    K=C+273;
    printf("In Fahrenheit: %.2f°F \n",F);
    printf("In Kelvin: %.2f K",K);
    return 0;
}
