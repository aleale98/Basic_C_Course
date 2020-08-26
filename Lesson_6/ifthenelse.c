#include <stdio.h>
#include <stdlib.h>

//entry point
int main(int argc, char const *argv[]) {
  int variable = 0;
  /*
    if variable is > 0 --> print "A"
    if variable is <= 0 --> print "B"
  */
  if(variable > 0){
    printf("A");
  }else{
    printf("B");
  }
  return 0;
}
