#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F,K;
    char opt;

    printf("Choose Convertion Format\nOption a: C to F/K\nOption b: F to C/K\nOption c: K to C/F\n\nOption: ");
    scanf(" %c", &opt);

    if (opt=='a'){
            printf("Enter the Temperature(in Celsius): ",C);
            scanf("%f",&C);
            F=(C*9/5)+32;
            K=C+273;
            printf("In Fahrenheit: %.2f°F \n",F);
            printf("In Kelvin: %.2f K",K);
    }
    else if (opt=='b'){
            printf("Enter the Temperature(in Fahrenheit): ",C);
            scanf("%f",&C);
            F=(C*9/5)+32;
            K=C+273;
            printf("In Fahrenheit: %.2f°F \n",F);
            printf("In Kelvin: %.2f K",K);    }
    else if (opt=='c'){
            printf("Enter the Temperature(in Kelvin): ",C);
            scanf("%f",&C);
            F=(C*9/5)+32;
            K=C+273;
            printf("In Fahrenheit: %.2f°F \n",F);
            printf("In Kelvin: %.2f K",K);    }
    else {
        printf("Error: Wrong input\nTry again");


    printf("Enter the Temperature(in Celsius): ",C);
    scanf("%f",&C);
    F=(C*9/5)+32;
    K=C+273;
    printf("In Fahrenheit: %.2f°F \n",F);
    printf("In Kelvin: %.2f K",K);
    }
    return 0;
}
