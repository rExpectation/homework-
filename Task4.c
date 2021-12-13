/* Задача 4. Декларирайте функция, която събира две числа и връща 
резултата им:
int addDigit(int a, int b);
Декларирайте в main две променливи, дайте им стойности, подайте 
променливите на функцията addDigit() и принтирайте резултата.
int main(void){
int a = 1, b = 4;
addDigit(а,b);
return 0;
}
Напишете тялото на функцията най-отдолу, в което се извършва събирането: */

#include <stdio.h>

int addDigit(int a, int b); // прототип

int main(void) {
    addDigit(10,20);
    addDigit(5,6);
    
    return 0;
}

int addDigit(int a, int b) {
    printf("%d\n", a + b);
}
    