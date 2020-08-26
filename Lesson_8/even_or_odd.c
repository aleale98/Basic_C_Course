#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  /*
    INPUT: a  number
    OUTPUT: even / odd
  */
  int number;
  printf("Insert a number: ");
  scanf("%d", &number);
  if(number % 2 == 0){
    printf("Even\n");
  }else{
    printf("Odd\n");
  }
  return 0;
}
