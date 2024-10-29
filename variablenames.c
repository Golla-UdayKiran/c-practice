/*C Variable Names (Identifiers)

All C variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create understandable and maintainable code:*/

/*#include <stdio.h>

int main() {
  // Good variable name
  int minutesPerHour = 60;

  // OK, but not so easy to understand what m actually is
  int m = 60;
  
  printf("%d\n", minutesPerHour);
  printf("%d", m);
  return 0;
}*/

/*Output:

60
60*/

/*The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names

Real-Life Example

Often in our examples, we simplify variable names to match their data type (myInt or myNum for int types, myChar for char types, and so on).
This is done to avoid confusion.

However, for a practical example of using variables, we have created a program that stores different data about a college student:*/

/*#include <stdio.h>

int main() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);

  return 0;
}*/

/*Output:

Student id: 15
Student age: 23
Student fee: 75.250000
Student grade: B*/

/*Calculate the Area of a Rectangle

In this real-life example, we create a program to calculate the area of a rectangle (by multiplying the length and width):*/

#include <stdio.h>

int main() {
  // Create integer variables
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area of a rectangle
  area = length * width;

  // Print the variables
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d", area);

  return 0;
}

/*Output:

Length is: 4
Width is: 6
Area of the rectangle is: 24*/