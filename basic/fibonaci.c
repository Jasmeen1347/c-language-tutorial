#include <stdio.h>

int main() {
  int max_limit, a = 0, b = 1, answer;
  printf("Enter the number of terms: ");
  scanf("%d", &max_limit);
  printf("Fibonacci Series: ");
  for (int i = 1; i <= max_limit; ++i) {
    printf("%d, ", a);
    answer = a + b;
    a = b;
    b = answer;
  }
  return 0;
}