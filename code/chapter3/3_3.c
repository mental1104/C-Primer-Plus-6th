/* 
    3. Write a program that sounds an alert and then prints the following text:
    Startled by the sudden sound, Sally shouted,
    "By the Great Pumpkin, what was that!"
*/

#include<stdio.h>

int main(){
    int bell = 0x07;
    printf("%cStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n",bell);
    return 0;
}