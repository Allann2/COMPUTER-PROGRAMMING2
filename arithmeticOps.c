#include <stdio.h>
#include <stdlib.h>

int main()
{

        int first, second, check; /*<==== declaration of variables ===*/

        printf("Input any 2 integer: ");/*<==== asks user to enter 2 numbers*/
        check = scanf("%d %d", &first, &second); /*<==== this will take 2 inputs*/
        if(!check){	/*<==== this will check if the take 2 inputs are numbers*/
            system("color C");
            system("cls");
            return printf("Invalid input \n\n\n");/*<==== an error message if the 2 inputs are not numbers**/
        }

        system("cls");
        printf("ADD = %d\n", first + second); /*<==== adds the 2 inputs and prompt it to the user*/
        printf("MUL = %d\n", first * second); /*<==== multiplies the 2 inputs and prompt it to the user*/
        printf("DIV = %d\n", first / second); /*<==== divides the 2 inputs and prompt it to the user*/
        printf("SUB = %d\n\n\n", first - second); /*<==== subtracts the 2 inputs and prompt it to the user*/


    return 0;
}