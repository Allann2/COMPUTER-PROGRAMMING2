#include <stdio.h>
#include <stdlib.h>

int main(){

    int UserInput, remainder, holder, check, reverse = 0; /*<=== the declaration of all variables including the error checker*/

    printf("Input any integer: ");      /*<=== asks the user to enter any positive number*/
    check = scanf("%d", &UserInput);

    if(!check){ /*<=== checks if the user input is a valid number*/
        printf("The inputted data is Invalid\n\n\n\n"); /*<=== prompts if the user input is not a valid number*/
        return 0;/*<=== ends the program*/
    }
    if(UserInput < 0){ /*<=== checks if the user input is a positive number*/
        printf("Please enter a positive number. . .\n\n\n\n"); /*<=== prompts if the user input is not a positive number*/
        return 0;/*<=== ends the program*/
    }


    holder = UserInput; /*<=== stores the user input to a holder variable for later use*/

    while (UserInput > 0) /*<=== this will repeat the process up until it met a certain condition*/
    {
        remainder = UserInput % 10;          
        reverse = reverse * 10 + remainder; 
        UserInput /= 10;                   
    }

    printf("Revised for %d is %d\n\n\n\n", holder, reverse); /*<=== the result*/

    return 0;


}