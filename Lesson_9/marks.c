#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  //needed to count the marks
  int counter = 0;
  //-1 to end the serie of marks
  int mark = 0;
  float average;
  while (mark != -1) {
    printf("Insert a mark\n");
    scanf("%d", &mark);
    //marks are good if from 0 to 20
    if(mark >= 0 && mark <= 20){
      average = average + mark;
      counter++; //counter = counter + 1;
    }else if(mark != -1){
      printf("Invalid mark. Please enter a valid mark\n");
    }else{
      if(counter != 0){
        average = average / counter;
        printf("Your average is: %f\n",average);
      }else{
        printf("Cannot calculate the average of 0 marks\n");
      }
    }
  }
  return 0;
}
