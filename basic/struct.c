#include <stdio.h>
#include <string.h>

// this is blueprint of a person
struct Person {
  char name[100];
  int age;
};

int main() {

  // this is a person we can create as many as we want using above blueprint 
  struct Person person1;
  struct Person person2;

  strcpy(person1.name, "John");
  person1.age = 20;

  strcpy(person2.name, "Jane");
  person2.age = 21;

  printf("%s is %d years old \n", person1.name, person1.age);
  printf("%s is %d years old \n", person2.name, person2.age);

  printf("memory occupied by person1: %d bytes \n", sizeof(person1));
  printf("memory occupied by person2: %d bytes \n", sizeof(person2));

  return 0;
}