#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /*
     Decide if a number is divisible by 5 and 11

     INPUT: a number
     OUTPUT: divisible / not divisible
  */
  int number;
  printf("Insert a number: ");
  scanf("%d", &number);
  if(number % 5 == 0 && number % 11 == 0){
    printf("Divisible\n");
  }else{
    printf("Not divisible\n");
  }
  return 0;
}
