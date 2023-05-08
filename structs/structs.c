#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main() {

  struct Student student1;
  student1.age = 30;
  strcpy(student1.name, "Andrew");
  strcpy(student1.major, "Engineering");
  student1.gpa = 3.7;

  printf("Hello, %s.", student1.name);
  printf("You have a GPA of %f in %s.\n", student1.gpa, student1.major);

  return 0;
}
