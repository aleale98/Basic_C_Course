#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /*
    0-30
    0-17 not passed
    18-30 passed
  */
  /*
    INPUT: mark
    OUTPUT: passed / not passed
  */
  int mark;
  printf("Insert the mark: ");
  scanf("%d",&mark);
  if(mark < 18){
    printf("Not passed\n");
  }else{
    printf("Passed\n");
  }

  return 0;
}
