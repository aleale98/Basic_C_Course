#include <stdio.h>
#include <stdlib.h>

void main(){
    /*
        Print the numbers from 1 to 10
    */
   /*
   UNDEFINED NUMBER OF TIMES
   int number = 1;
   while(number <= 10){
       printf("%d\n", number);
       number++;
   }
   */
  //FOR LOOP
  /*
  for(counter initialization; condition; increment (or decrement))
  DEFINED NUMBER OF TIMES

  increment --> i++, i = i+1
  decrement --> i--, i = i-1
  
  for(int i = 1; i <= 10; i++){
      printf("%d\n", i);
  }
*/


  for(int i = 97; i <= 122; i++){
      printf("%c\n", (char)i);
  }
}

