#include <stdio.h>
#include <stdlib.h>

int main() {

  double num1;
  double num2;

  printf("Enter first number: ");
  scanf("%lf", &num1); // don't forget pointer!
  printf("Enter second number: ");
  scanf("%lf", &num2);  //don't forget pointer!
  printf("The sum is %f.", num1 + num2);

  return 0;

}
