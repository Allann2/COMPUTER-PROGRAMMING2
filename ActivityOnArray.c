#include <stdio.h>
#include <stdlib.h>

int main()
{
            //2dArray
    int accounts[3][2] ={
        {123, 123},
        {456, 456},
        {789, 789}
    };


            //int Declaration
    int idd, pin, IDChecker, pinChecker;



            //Input ID
        printf("Enter ID number: ");
   IDChecker = scanf("%d", &idd);



            //Input PIN
        printf("\nEnter PIN: ");
   pinChecker = scanf("%d", &pin);



            //Checker
    if( IDChecker == 1 && pinChecker == 1 &&
        idd == accounts[0][0] && pin == accounts[0][1] ||
        idd == accounts[1][0] && pin == accounts[1][1] ||
        idd == accounts[2][0] && pin == accounts[2][1]){

        system("cls");
        printf("\nYou have Successfully Logged In!\n\n");


    }
    else{
        system("cls");
        printf("\n\nInvalid ID!/PIN\n\n\n");
        return 0;
    }


      return 0;
}
