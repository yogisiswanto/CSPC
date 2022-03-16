/*
 *  Name Program    : alpaka14
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 22th Januari 2022
 *  Language        : C Language
 */

/*
Input 1
a
b
5
6
r
7

Output 1
a
5
b
6
r
7

Input 2
9
b
5
6
r
7

Output 2
tidak valid

*/

// Standard librarry
#include <stdio.h>

// Main function
int main(){

    // Variable declaration
    char inputArray[6];
    int increment, alphabetCounter, numericCounter;

    // Variable inisialization
    alphabetCounter = 0;
    numericCounter = 0;

    // Loop for insert char input
    for (increment = 0; increment < 6; increment++){

        scanf(" %c", &inputArray[increment]);

        // Condition when current char is equal with numeric
        if((inputArray[increment] == '0') || (inputArray[increment] == '1') || (inputArray[increment] == '2') || (inputArray[increment] == '3') || (inputArray[increment] == '4') || (inputArray[increment] == '5') || (inputArray[increment] == '6') || (inputArray[increment] == '7') || (inputArray[increment] == '8') || (inputArray[increment] == '9')){

            numericCounter++;
        }

        // Condition when current char is equal with alphabet
        else{

            alphabetCounter++;
        }
    }

    // Condition when alphabet counter is equal with numeric counter
    if (alphabetCounter == numericCounter){

        for(increment = 0; increment < 6; increment++){

            printf("%c\n", inputArray[increment]);
        }
    }

    // Condition when alphabet counter is not equal with numeric counter
    else{

        printf("tidak valid\n");
    }

    return 0;
}