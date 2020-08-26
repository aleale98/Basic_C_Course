#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /*
    INPUT: 3 NUMBERS
    OUTPUT: MAXIMUM AMONG 3 NUMBERS
  */
  /*
    b > a and b > c
    true and true --> true
  */
  int a = 4;
  int b = 7;
  int c = 1;
  int max;
  /*
  if(a > b){
    if(a > c){
      max = a;
    }
  }else{
    if(b > c){
      max = b;
    }else{
      max = c;
    }
  }
  */
  /*
    && = AND
    || = OR
    ! = NOT
  */
  if(a > b && a > c){
    max = a;
  }else if(b > c){
    max = b;
  }else{
    max = c;
  }
  printf("Max: %d\n",max);
  return 0;
}
