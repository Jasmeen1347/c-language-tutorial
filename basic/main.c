#include <stdio.h>

#define LIFE 5 // one way to define constant


int main(){
  const int age = 20;

  printf("Hello, World!\n");
  printf("%d \n", LIFE);
  printf("%d \n", LIFE * age);
  return 0;
}