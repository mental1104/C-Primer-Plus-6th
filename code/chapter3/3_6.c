/*
    6. The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
    about 950 grams. Write a program that requests an amount of water, in quarts, and
    displays the number of water molecules in that amount.
*/

#include<stdio.h>

int main(){
    int quart;
    printf("Please enter the amount of water in quarts.\n> ");
    scanf("%d", &quart);
    quart*=950;
    printf("The number of water molecules: %e\n", quart/3e-23);
    return 0;

}