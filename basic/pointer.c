#include <stdio.h>
#include <string.h>

// pointer is data type that stores the address of another variable

int main() {
  
  // variable to store player1 score
  int player1;
  // array to store player2 scores
  int player2[10];


  // this will print the address of player1 and player2
  // address is like a house number, it's where the variable is stored in the computer
  printf("%x \n", &player1);
  printf("%x \n", &player2);


  // variable to store high score
  int high_score = 111;
  // pointer to store the address of high_score
  int *ip = &high_score;

  // this will print the address of high_score
  printf("%x \n", ip);
  // this will print the value of high_score
  printf("%d \n", *ip);
  // this will print the address of high_score again
  printf("%x \n", &high_score);

  // change the value of high_score using the pointer
  *ip = 10;

  // print the value of high_score again
  printf("%d \n", high_score);

  return 0;
}
