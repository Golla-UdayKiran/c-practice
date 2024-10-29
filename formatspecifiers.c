/*C Format Specifiers

Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing.
It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character.

For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:*/

/*#include <stdio.h>

int main() {
  int myNum = 15;
  printf("%d", myNum);
  return 0;
}*/

/*Output:

15*/

//To print other types, use %c for char and %f for float:

/*#include <stdio.h>

int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}*/

/*Output:

15
5.990000
D*/

//To combine both text and a variable, separate them with a comma inside the printf() function:

/*#include <stdio.h>

int main() {
  int myNum = 15;
  printf("My favorite number is: %d", myNum);
  return 0;
}*/

/*Output:

My favorite number is: 15*/

//To print different types in a single printf() function, you can use the following:

/*#include <stdio.h>

int main() {
  int myNum = 15;
  char myLetter = 'D';
  printf("My number is %d and my letter is %c", myNum, myLetter);
  return 0;
}*/

/*Output:

My number is 15 and my letter is D*/

/*You will learn more about Data Types in a later chapter.

Print Values Without Variables

You can also just print a value without storing it in a variable, as long as you use the correct format specifier:*/

#include <stdio.h>

int main() {
  printf("My favorite number is: %d\n", 15);
  printf("My favorite letter is: %c", 'D');
  return 0;
}

/*Output:

My favorite number is: 15
My favorite letter is: D*/

//However, it is more sustainable to use variables as they are saved for later and can be re-used whenever.