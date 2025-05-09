#include <stdio.h>
#include <string.h>


int main() {
  
  // printf("%s\n", __FILE__);

  FILE *fp;
  
  // fp = fopen("/home/pedalsup/D-drive/Learning/c-lang/basic/test.txt", "w+");

  // fputs("Please put this text in my file", fp);

  // fclose(fp);

  fp = fopen("/home/pedalsup/D-drive/Learning/c-lang/basic/test.txt", "r");
  char buffer[100];
  fgets(buffer, 100, fp);
  printf("%s", buffer);



  return 0;
}