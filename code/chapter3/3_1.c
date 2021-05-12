/* 
  1. Find out what your system does with integer overflow, floating-point overflow, and
  floating-point underflow by using the experimental approach; that is, write programs
  having these problems. (You can check the discussion in Chapter 4 of limits.h and
  float.h to get guidance on the largest and smallest values.)
*/

#include<stdio.h>
#include<limits.h>

int main(){
    int max = INT_MAX;
    int min = INT_MIN;
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Max Overflow: %d.\n",max+1);
    printf("Min Overflow: %d\n", min-1);

    return 0;
}