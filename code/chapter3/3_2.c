/* 
   2. Write a program that asks you to enter an ASCII code value, such as 66, and then prints
   the character having that ASCII code.
*/

#include<stdio.h>

int main(){
    printf("Please enter an ASCII code(e.g. 66) to print out its character.\n");
    int ascii;
    scanf("%d",&ascii);
    printf("%c\n",ascii);
    return 0;
} 