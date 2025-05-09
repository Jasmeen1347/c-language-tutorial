#include <stdio.h>

int main() {

  int choice;
  double num1, num2, result;
  do {
    printf("\n Welcome to simple calculator");
    printf("\n choose an option");
    printf("\n 1. Add");
    printf("\n 2. Subtract");
    printf("\n 3. Multiply");
    printf("\n 4. Divide");
    printf("\n 5. Power");
    printf("\n 6. Modulus");
    printf("\n 7. Exit \n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
  } while (choice != 7);

  


  return 0;
}