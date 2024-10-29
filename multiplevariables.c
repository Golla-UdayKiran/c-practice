/*C Declare Multiple Variables

To declare more than one variable of the same type, use a comma-separated list:*/

/*#include <stdio.h>

int main() {
  int x = 5, y = 6, z = 50;
  printf("%d", x + y + z);
  return 0;
}*/

/*Output:

61*/

//You can also assign the same value to multiple variables of the same type:

#include <stdio.h>

int main() {
  int x, y, z;
  x = y = z = 50;
  printf("%d", x + y + z);
  return 0;
}

/*Output:

150*/