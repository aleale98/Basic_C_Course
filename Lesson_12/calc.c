#include <stdio.h>
#include <stdlib.h>

void main(){
    /*
        realize a simple calculator to perform: +, -, *, /
        A menu is required.
    */
   int choice;
   //menu
   printf("**********************************************");
                printf("\n\nChoice the option\n");
                printf("\t1 - SUM\n");
                printf("\t2 - MINUS\n");
                printf("\t3 - MULTIPLICATION\n");
                printf("\t4 - DIVISION\n");
                printf("\t5 - LOGOUT\n");
	printf("**********************************************\n");
    printf("Make a choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        /* sum */
        break;
    case 2:
        /* minus */
        break;
    case 3:
        /* multiplication */
        break;
    case 4:
        /* division */
        break;
    case 5:
        /* logout */
        exit(0);
        break;
    default:
        /*Invalid choice*/
        break;
    }
}