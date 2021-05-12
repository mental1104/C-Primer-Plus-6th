/*
    5. There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
    your age in years and then displays the equivalent number of seconds.
*/

#include<stdio.h>

int main(){
    printf("What is your age?\n> ");
    int age;
    scanf("%d",&age);
    printf("You've experienced nearly %ld seconds.\n", (long)(age * 3.156e7));
    return 0;
}