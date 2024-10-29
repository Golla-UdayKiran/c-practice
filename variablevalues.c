/*C Variable Values

Change Variable Values

If you assign a new value to an existing variable, it will overwrite the previous value:*/

/*#include <stdio.h>

int main() {
  int myNum = 15; // myNum is 15
  myNum = 10; // Now myNum is 10
  
  printf("%d", myNum);
  return 0;
}*/

/*Output:

10*/

//You can also assign the value of one variable to another:

/*#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);
  
  return 0;
}*/

/*Output:

23*/

//Or copy values to empty variables:

/*#include <stdio.h>

int main() {
  // Create a myNum variable and assign the value 15 to it
  int myNum = 15;
  
  // Declare a myOtherNum variable without assigning it a value
  int myOtherNum;

  // Assign value of myNum to myOtherNum
  myOtherNum = myNum;

  // myOtherNum now has 15 as a value
  printf("%d", myOtherNum);
  
  return 0;
}*/

/*Output:

15*/

/*Add Variables Together

To add a variable to another variable, you can use the + operator:*/

#include <stdio.h>

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  printf("%d", sum);
  return 0;
}

/*Output:

11*/