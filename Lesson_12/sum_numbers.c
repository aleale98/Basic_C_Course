#include <stdio.h>
#include <stdlib.h>

void main(){
    int sum = 0;
    printf("The first ten natural numbers are: \n");
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("Sum: %d", sum);
}