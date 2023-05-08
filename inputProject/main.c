#include <stdio.h>
#include <stdlib.h>

int main() {

  int age;
  char name[20];

  printf("Enter your first and last name: ");
  // use fgets for string with spaces; variable name, num of chars, how to get info
  fgets(name, 20, stdin); // NOTE: this adds new line to end of input!
  printf("Enter you age: ");
  scanf("%d", &age); //use a pointer!
  printf("Hello, %s, you are %d years old.\n", name, age);

  return 0;

}
