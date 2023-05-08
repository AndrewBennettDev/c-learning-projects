#include <stdio.h>
#include <stdlib.h>

int main() {

  int luckyNumbers[] = {7, 11, 13, 17, 19, 23};
  /*
     Array can be limited to number of inputs -> int luckyNumbers[4],
     then call things like luckyNumbers[0] = 73;
  */
  printf("Your lucky number for today is %d\n", luckyNumbers[0]);

  return 0;
}
