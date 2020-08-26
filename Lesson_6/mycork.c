#include <stdio.h>
#include <stdlib.h>

int main(){
  //Input: two numbers
  //Output: swapped variables
	 int a,b,c;
	 a = 10;
	 b = 15;
	 printf("%d\n",a);
	 printf("%d\n",b);
	 c = a;
	 a = b;
	 b = c;
	 printf("a: %d\n",a);
	 printf("b: %d",b);
  return 0;
}
