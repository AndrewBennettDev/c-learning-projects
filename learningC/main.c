#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
  // Here are some basic data types:
  char name[] = "Andrew";
  int age = 30;
  const double PI = 3.1415; // constant - common to use ALL_CAPS for name
  char firstLetter = 'P';
 
   /*
    Here is a longer comment to describe the following print statements below.
    These are very basic statements to practice some common things.
  */

  printf("Hello %s!\n", name);
  printf("I am %d years old.\n", age);
  printf("Pi starts with %c, and the value is %f.\n", firstLetter, PI);
  printf("5 to the 4th power is %f.\n", pow(5, 4));
  printf("The square root of 16 is %f.\n", sqrt(16));
  printf("36.356 rounded up is %f.\n", ceil(36.356));
  printf("36.656 rounded down is %f.\n", floor(36.656));
  
  return 0;

}
