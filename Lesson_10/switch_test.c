#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 7;
  switch (number) {
    case 1:
      printf("One\n");
      break;
    case 2:
      printf("Two\n");
      break;
    default:
      printf("default\n");
  }
  return 0;
}
