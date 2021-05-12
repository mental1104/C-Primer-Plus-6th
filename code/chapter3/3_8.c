/*
    8. In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
    ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
    volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
    and teaspoons. Why does a floating-point type make more sense for this application than
    an integer type?
*/

#include<stdio.h>

int main(){
    float cups;
    printf("Enter the number of cups: ");
    scanf("%f", &cups);
    printf("Pint:        %f\n", cups/2);
    printf("Ounces:      %f\n", 8*cups);
    printf("Tablespoons: %f\n", 16*cups);
    printf("Teaspoons:   %f\n", 48*cups);
    return 0;
}