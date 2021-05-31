#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[200];  /*declare char of string to 200*/
    int  i, vowels, consonantCounter; /*Counter*/


   printf("Input a sentence: "); /*asks user for a sentence*/
   gets(str);                   /*stores string in str*/
   system("cls");


   printf("The Inputted String: "); /*prints the user Input*/
   puts(str);                      /*prints the user Input*/
    printf("\n");                 /*prints the user Input*/

   i = 0;                   /*assigning values*/
   vowels = 0;             /*assigning values*/
   consonantCounter = 0;  /*assigning values*/


    while(str[i]!='\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i]=str[i]-32;
            vowels++;
        }
        if(str[i] >= 'a' || str[i] >= 'e' || str[i] >= 'i' || str[i] >= 'o' || str[i] >= 'u'){
            consonantCounter++;
        }

        i++;
    }
    /*Conversion*/
    printf("Converted strings to uppercase: ");
    puts(str);
    printf("\n");

    printf("Length of string: %d \n", i); /*Prints the length of string*/

    printf("Number of consonant letters: %d \n", i-vowels);     /*Prints the number of consonant letters*/

    printf("Number of vowels: %d \n", i-consonantCounter);      /*prints the number of vowels*/

}
