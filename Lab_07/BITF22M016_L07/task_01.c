#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int n1 = 1 + rand() % 2;
  printf("n1 = %d\n", n1);
  
  int n2 = 1 + rand() % 100;
  printf("n2 = %d\n", n2);
  
  int n3 = rand() % 10;
  printf("n3 = %d\n", n3);

  int n4 = 1000 + rand() % 113;
  printf("n4 = %d\n", n4);

  int n5 = rand() % 3 - 1;
  printf("n5 is %d\n", n5);

  int n6 = rand() % 15 - 3;
  printf("n6 is %d\n", n6);
  
  return 0;
}
