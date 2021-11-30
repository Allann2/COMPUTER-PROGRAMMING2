#include <stdio.h>
#include <stdlib.h>

/*===declared a function that adds all 5 grades===*/
int addGrades(int first, int second, int third, int fourth, int fifth){                                     
    int total = first + second + third + fourth + fifth;                                                  

    return total;   /*<==this returns or sendback the value of the variable named total*/              
}

/*===declared a function that calculates the average of 5 grades===*/
int average(int total){
    int avgGrade = total/5;  /*<=== this calculates the average of 5 grades and stores it to an integer variable named averageGrade ===<<<<<-*/
                                
    return avgGrade; /*<==sends back the value of the variable named averageGrade*/
}

/*===The Main function===*/
int main(){

    int check, firstSubGrade, secondSubGrade, thirdSubGrade, fourthSubGrade, fifthSubGrade;/*<=== declaration if all integer variables including the error checker ===<<<- */
                /* <===  ===<<<- */
    printf("Enter five subjects grade: \n"); /* <=== asks the user to enter 5 grades ===<<<- */
    check = scanf("%d %d %d %d %d", &firstSubGrade, &secondSubGrade, &thirdSubGrade, &fourthSubGrade, &fifthSubGrade);

    if(!check){     /* <=== checks the user's Input if it is ineger/valid ===<<<- */
        printf("invalid Input. . . \n\n\n\n");/* <=== error message ===<<<- */
        return 0;/* <=== ends program if not valid ===<<<- */
    }



    printf("Average Grade: %d", average(addGrades(firstSubGrade, secondSubGrade, thirdSubGrade, fourthSubGrade, fifthSubGrade)));



    return 0;





}