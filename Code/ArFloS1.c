/*
 *  Name Program    : ArFloS1
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 15th March 2022
 *  Language        : C Language
 */

/*
Input
=======
3
12.12
24.12
36.12

Output
========
yes

*/

// Standard librarry
#include <stdio.h>

// Main function
int main(){

    // Variable declaration
    int totalData, increment, integerBeforeComma, integerAfterComma, incrementModulo;
    float input, floatBeforeComma, floatAfterComma, marginOfError;

    // Variable inisialization
    incrementModulo = 0;
    marginOfError = 0.0005;

    scanf("%d", &totalData);

    for (increment = 0; increment < totalData; increment++){

        scanf("%f", &input);

        // Get 2 digit after comma
        integerBeforeComma = input;
        floatBeforeComma = (float) integerBeforeComma;
        floatAfterComma = ((input - floatBeforeComma) * 100) + marginOfError;
        integerAfterComma = floatAfterComma;

        // Condition when floatBeforeComma is modulo by floatAfterComma
        if (integerBeforeComma % integerAfterComma == 0){

            incrementModulo++;
        
        }        
    }

    // Condition when increment modulo is equal with total data
    if (incrementModulo == totalData){
    
        printf("yes\n");
    
    }

    // Condition when increment modulo is not equal with total data
    else{

        printf("no\n");

    } 

    return 0;
}
