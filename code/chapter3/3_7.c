/*
    7. There are 2.54 centimeters to the inch. Write a program that asks you to enter your
    height in inches and then displays your height in centimeters. Or, if you prefer, ask for
    the height in centimeters and convert that to inches.
*/

#include<stdio.h>

int main(){
    double inches;
    printf("Please enter your height(in inches): ");
    scanf("%lf", &inches);
    printf("Corresponding to %lf centimeters.\n", inches*2.54);
    return 0;
}