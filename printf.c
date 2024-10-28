/*C Output (Print Text)

To output values or print text in C, you can use the printf() function:

Double Quotes

When you are working with text, it must be wrapped inside double quotations marks "".

If you forget the double quotes, an error occurs:

Many printf Functions

You can use as many printf() functions as you want.
However, note that it does not insert a new line at the end of the output:*/

#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is awesome!");
  return 0;
}

/*Output:

Hello World!I am learning C.And it is awesome!*/