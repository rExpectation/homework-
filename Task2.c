/* Задача 2. След излизането от Еврозоната Великобритания въвежда отново 
унцията като мерна единица в заведенията за обществено хранене. Чашата 
има обем 8 унции. Напишете програма, която да пита потребителя колко 
унции желае и тя да връща броя на чашите, които е поръчал. */

#include <stdio.h>

int main(void) {
    double iVolumePerGlass = 8.0;
    double dOz = 0.0;   // мерна единица за унции 
    
    printf("Колко унции бихте желали?");
    scanf("\n%lf" , &dOz); 
 
    double dNumberOfGlasses = (dOz / iVolumePerGlass);
    printf("Вие въведохте %f унции което се равнява на %f чаши.", dOz, dNumberOfGlasses);

    return 0;
}