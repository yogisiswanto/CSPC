/*
 *  Name Program    : ArFloS2
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
12.13
12.15
12.67

Output
========
yes

*/

// Standard librarry
#include <stdio.h>

// Main function
int main(){

    // Variable declaration
    int totalData, increment, integerBeforeComma, integerAfterComma, counter;
    float input, floatBeforeComma, floatAfterComma, marginOfError;

    // Variable inisialization
    counter = 0;
    marginOfError = 0.0005;

    scanf("%d", &totalData);

    for (increment = 0; increment < totalData; increment++){
        
        scanf("%f", &input);

        // Get 2 digit after comma
        integerBeforeComma = input;
        floatBeforeComma = (float) integerBeforeComma;
        floatAfterComma = ((input - floatBeforeComma) * 100) + marginOfError;
        integerAfterComma = floatAfterComma;

        // Condition when integerBeforeComma is even and integerAfterComma is odd
        if ((integerBeforeComma % 2 == 0) && (integerAfterComma % 2 != 0)){

            counter++;
        
        }        
    }

    // Condition when counter is equal with total data
    if (counter == totalData){
    
        printf("yes\n");
    
    }

    // Condition when counter is not equal with total data
    else{

        printf("no\n");

    } 

    return 0;
}
