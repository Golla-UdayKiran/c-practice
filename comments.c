/*C Comments

Comments can be used to explain code, and to make it more readable.
It can also be used to prevent execution when testing alternative code.

Comments can be singled-lined or multi-lined.

Single-line Comments

Single-line comments start with two forward slashes (//).

Any text between // and the end of the line is ignored by the compiler (will not be executed).

This example uses a single-line comment before a line of code:*/

/*#include <stdio.h>

int main() {
  // This is a comment
  printf("Hello World!");
  return 0;
}*/

/*Output:

Hello World!*/

//This example uses a single-line comment at the end of a line of code:

/*#include <stdio.h>

int main() {
  printf("Hello World!"); // This is a comment
  return 0;
}*/

/*Output:

Hello World!*/

//C Multi-line Comments

//Multi-line comments start with /* and ends with */.

//Any text between /* and */ will be ignored by the compiler:

#include <stdio.h>

int main() {
  /* The code below will print the words Hello World!
  to the screen, and it is amazing */
  printf("Hello World!");
  return 0;
}

/*Output:

Hello World!*/

//Single or multi-line comments?

//It is up to you which you want to use.
//Normally, we use // for short comments, and /* */ for longer.

//Good to know: Before version C99 (released in 1999), you could only use multi-line comments in C.