/*C New Lines

To insert a new line, you can use the \n character:*/

/*#include <stdio.h>

int main() {
  printf("Hello World!\n");
  printf("I am learning C.");
  return 0;
}*/

/*Output:

Hello World!
I am learning C.*/

/*You can also output multiple lines with a single printf() function.
However, this could make the code harder to read:*/

/*#include <stdio.h>

int main() {
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}*/

/*Output:

Hello World!
I am learning C.
And it is awesome!*/

//Tip: Two \n characters after each other will create a blank line:

/*#include <stdio.h>

int main() {
  printf("Hello World!\n\n");
  printf("I am learning C.");
  return 0;
}*/

/*Output:

Hello World!

I am learning C.*/

/*What is \n exactly?

The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen.
This results in a new line.

Examples of other valid escape sequences are:*/

/*Escape Sequence
\t	Creates a horizontal tab*/

/*#include <stdio.h>

int main() {
  printf("Hello World!\t");
  printf("I am learning C.");
  return 0;
}*/

/*Output:

Hello World!    I am learning C.*/

/*Escape Sequence
\\	Inserts a backslash character (\)*/

/*#include <stdio.h>

int main() {
  printf("Hello World!\\");
  printf("I am learning C.");
  return 0;
}*/

/*Output:

Hello World!\I am learning C.*/

/*Escape Sequence
\"	Inserts a double quote character*/

#include <stdio.h>

int main() {
  printf("They call him \"Johnny\".");
  return 0;
}

/*Output:

They call him "Johnny".*/