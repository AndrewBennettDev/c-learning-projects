#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
  int maximum;

  if (num1 > num2) {
    maximum = num1;
  } else {
    maximum = num2;
  }

  if (num3 > maximum) {
    maximum = num3;
  }
 
  return maximum;
}

int maxAlt(int num1, int num2, int num3) {
  int result;

  if (num1 >= num2 && num1 >= num3) {
    result = num1;
  } else if (num2 > num3) {
    result = num2;
  } else {
    result = num3;
  }

  return result;
}

int main() {
  printf("The larger number from max is: %d \n", max(2, 5, 10));
  printf("The larger number from maxAlt is: %d \n", maxAlt(2, 5, 10));
  return 0;
}
