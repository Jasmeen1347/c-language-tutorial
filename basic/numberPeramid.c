#include <stdio.h>

void main() {

  // for(int i = 1; i <= 10; i++) {
  //   for(int j = 1; j <= i; j++) {
  //     printf("%d ", j);
  //   }
  //   printf("\n");
  // }


  for(int i = 10; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
}