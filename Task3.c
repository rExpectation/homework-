/* Задача 3.Една година на Юпитер(времето необходимо на Юпитер за да 
направи една пълна обиколка на Слънцето) има продължителност 12 земни 
години. Напишете програма, която конвертира въведените от потребителя 
земни дни в Юпитерски години */

#include <stdio.h>

int main(void) {

    float fEarthDays;
    float fJupiterYears;

    printf("Въведи земни дни: ");
    scanf("%f", &fEarthDays);

    fJupiterYears = fEarthDays / (365.0 * 12.0);

    printf("Това се равнява на %f Юпитер години", fJupiterYears);

    return 0;
}