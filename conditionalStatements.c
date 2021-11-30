#include <stdio.h>
#include <stdlib.h>

int main(){

        int age, check; /*<==== declaration of age and error checker variable*/
        char name[30]; /*<==== Name variable declaration*/

        printf("Name: ");     /*<==== asks the user to input a name*/
        scanf("%s", name);

        printf("Age: ");  /*<==== asks the user to input an age*/
        check = scanf("%d", &age);

        if(!check){  /*<==== this will check if the age is an integer or not*/
            printf("Invalid Age, Please Try Again.\n\n\n\n");/*<==== if the age input is not an integer it will throw an error massage*/
            return 0;/*<==== this will end the program if age input is invalid*/
        }
        if( age < 18 ){/*<==== this will check if the user is below 18*/
            printf("You are not eligible for voting.\n\n\n\n");/*<==== shown output if user is below 18*/

        }else if(age >= 18){/*<==== will check if the user's age is 18+*/
            printf("You are eligible for voting.\n\n");/*<==== this will be shown if user is 18+*/
        }

    return 0;
}