#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("Welcome the world of guessing game\n");

  int random_number, guess_number, attempts = 0;
  srand(time(NULL));

  random_number = rand() % 100 + 1; // generating random number between 1 to 100

  do
  {
    printf("Enter a your guess between 1 to 100: ");
    scanf("%d", &guess_number);
    attempts++;

    if (guess_number > random_number) {
      printf("Guess smaller number\n");
    } else if (guess_number < random_number) {
      printf("Guess larger number\n");
    } else {
      printf("Congratulations, you guess the correct number you made %d attempts\n", attempts);
    }
  } while (guess_number != random_number);
  
  printf("\n Bye Bye Thanks for Playing");
  printf("\n Develop by Jasmeen");

  return 0;
}