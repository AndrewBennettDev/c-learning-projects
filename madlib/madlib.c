#include <stdio.h>
#include <stdlib.h>

int main() {
  
  char first[10];
  char last[10];

  printf("Enter your first and last name: ");
  scanf("%s%s", first, last); //allows you to accept text with spaces and save to separate variables. no new line!
  printf("Hello, %s %s.\n", first, last);

  return 0;
}
