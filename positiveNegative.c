#include <stdio.h>
#include <stdlib.h>

int main(){
    int userInput, check;

    printf("Input any integer: ");
    check = scanf("%d", &userInput);
    if(!check){
        printf("The inputted data is Invalid.\n\n");
        return 0;
    }
    if(userInput < 0){
        printf("The integer is a negative number.\n\n");
    }else if(userInput >= 0){
        printf("The integer is a positive number.\n\n");
    }




    return 0;

}