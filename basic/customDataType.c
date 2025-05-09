#include <stdio.h>
#include <string.h>


int main() {
  
  // typedef is used to create a custom data type based on existing data type in c. here I created a custom data type called score which is same as int so now I can use score instead of int
  typedef int score;

  score player1;

  player1 = 10;

  printf("%d", player1);
  return 0;
}