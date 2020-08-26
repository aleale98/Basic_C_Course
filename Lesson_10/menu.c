#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /*
    Program to make a menu
  */
  char choice;
  printf("Insert a char: \n");
  scanf("%c", &choice);
  switch (choice) {
    case 'a':
      printf("You chose: %c\n", choice);
      break;
    case 'b':
      printf("You chose: %c\n", choice);
      break;
    case 'c':
      printf("You chose: %c\n", choice);
      break;
    case 'd':
      printf("You chose: %c\n", choice);
      break;
    default:
      printf("Invalid choice\n");
  }
  return 0;
}
