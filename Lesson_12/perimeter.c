#include <stdio.h>
#include <stdlib.h>

void main(){
    int length;
    int breadth;
    int perimeter;
    printf("Length: ");
    scanf("%d", &length);
    printf("Breadth: ");
    scanf("%d", &breadth);
    //can be calculated only if length > 0  AND breadth > 0
    if(length > 0 && breadth > 0){
        perimeter = (length + breadth) * 2;
        printf("Perimeter: %d", perimeter);
    }else{
        printf("Cannot calculate perimeter\n");
    }
}