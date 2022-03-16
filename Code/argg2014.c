/*
 *  Name Program    : argg2014
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 15th March 2022
 *  Language        : C Language
 */

/*
Input 1
=======
3
1
2
3
3
5
6
7

Output 1
========
valid

Input 2
=======
3
1
2
4
4
1
2
3
4

Output 2
========
tidak valid

Input 3
=======
3
1
2
4
3
11
12
13

Output 3
========
tidak valid

*/

// Standard librarry
#include <stdio.h>

// Main function
int main(){

    // Variable declaration
    int firstInput, secondInput,  increment, counter, firstArray[99], secondArray[99];

    // Variable inisialization
    counter = 0;

    // Input first array
    scanf("%d", &firstInput);

    for (increment = 0; increment < firstInput; increment++){
        
        scanf("%d", &firstArray[increment]);
        
    }

    // Input second array
    scanf("%d", &secondInput);

    for (increment = 0; increment < secondInput; increment++){
        
        scanf("%d", &secondArray[increment]);
    }

    // Condition when firstInput is equal with secondInput
    if (firstInput == secondInput){

        for (increment = 0; increment < firstInput; increment++){
            
            // Condition when firstArray value of current index and secondArray value of current index is odd or even at the same time
            if (((firstArray[increment] % 2 == 0) && (secondArray[increment] % 2 == 0)) || ((firstArray[increment] % 2 != 0) && (secondArray[increment] % 2 != 0))){
                
                counter++;

            }           
        }

        // Condition when counter is equal with firstInput or secondInput
        if ((counter == firstInput) || (counter == secondInput)){
            
            printf("valid\n");
            
        }

        // Condition when counter is equal with firstInput or secondInput
        else{

            printf("tidak valid\n");

        }    
    }
    
    // Condition when firstInput is not equal with secondInput
    else{

        printf("tidak valid\n");

    }
    
    return 0;
}