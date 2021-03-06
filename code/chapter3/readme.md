# Chapter 3 Data and C  

Usage:  
`gcc [code.c]`  
`./a.out`  
---

1. Find out what your system does with integer overflow, floating-point overflow, and
  floating-point underflow by using the experimental approach; that is, write programs
  having these problems. (You can check the discussion in Chapter 4 of limits.h and
  float.h to get guidance on the largest and smallest values.)  
[code](./3_1.c)
> res:  
Max = 2147483647  
Min = -2147483648  
Max Overflow: -2147483648.  
Min Overflow: 2147483647  
when INT_MAX + 1, it becomes INT_MIN. And when INT_MIN - 1, it becomes INT_MAX.  

2. Write a program that asks you to enter an ASCII code value, such as 66, and then prints
   the character having that ASCII code.  
   [code](./3_2.c)
> Please enter an ASCII code(e.g. 66) to print out its character.  
66  
B

3. Write a program that sounds an alert and then prints the following text:
    Startled by the sudden sound, Sally shouted,
    "By the Great Pumpkin, what was that!"  
[code](./3_3.c)
> Hint: The bell can only be heard in the shell.  

4. Write a program that reads in a floating-point number and prints it first in decimal-point
    notation, then in exponential notation, and then, if your system supports it, p notation.
    Have the output use the following format (the actual number of digits displayed for the
    exponent depends on the system):
    Enter a floating-point value: 64.25
    fixed-point notation: 64.250000
    exponential notation: 6.425000e+01
    p notation: 0x1.01p+6  
[code](./3_4.c)  
> Enter a floating-point value: 50.12  
fixed-point notation: 50.119999  
exponential notation: 5.012000e+01  
p notation: 0x1.90f5c2p+5

5. There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
    your age in years and then displays the equivalent number of seconds.  
[code](./3_5.c)  
> What is your age?  
 1  
You've experienced nearly 31560000 seconds.  

6. The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
    about 950 grams. Write a program that requests an amount of water, in quarts, and
    displays the number of water molecules in that amount.  
[code](./3_6.c)  
> Please enter the amount of water in quarts.  
1  
The number of water molecules: 3.166667e+25  

7. There are 2.54 centimeters to the inch. Write a program that asks you to enter your
    height in inches and then displays your height in centimeters. Or, if you prefer, ask for
    the height in centimeters and convert that to inches.  
[code](./3_7.c)
> Please enter your height(in inches): 61  
Corresponding to 154.940000 centimeters.  

8. In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
    ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
    volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
    and teaspoons. Why does a floating-point type make more sense for this application than
    an integer type?  
    [code](./3_8.c)  

> Enter the number of cups: 2.2  
Pint:        1.100000  
Ounces:      17.600000  
Tablespoons: 35.200001  
Teaspoons:   105.600006  