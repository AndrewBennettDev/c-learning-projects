#include <stdio.h>
#include <stdlib.h>

void sayHi(char[]);
void sayGoodbye();

int main()
{
  sayHi("Youthere");
  sayGoodbye();
  return 0;
}

void sayHi(char name[])
{
  printf("hello, %s\n", name);
}

void sayGoodbye()
{
  printf("Bye!\n");
}

