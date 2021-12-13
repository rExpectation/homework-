/* Задача 1. Гравитацията на Луната е само 17 % от тази на земята. Напишете 
програма, в която потребителя да въвежда своето тегло на Земята и след 
изчисляване да показва теглото му на Луната.
*/

#include <stdio.h>

int main(void) {
    double dGravityOnMoon = 0.17;
    double dWeightEarth;
    printf("Въведете своето тегло на Земята ");
    scanf("%lf", &dWeightEarth);
    double dWeightMoon = dWeightEarth * dGravityOnMoon;
    printf("%lf\n", dWeightMoon);
    printf("Твоетео тегло e %lf kg. На луната теглото ти ще бъде %lf" , dWeightEarth, dWeightMoon);
    
    return 0;
}
