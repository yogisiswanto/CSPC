/*
 *  Name Program    : arggu14
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
5
34
55
66
77
99

Output 1
========
1 3 55 77 99
2 34 66

Input 2
=======
4
2
4
8
18
3
3
10
5

Output 2
========
3 5
2 4 8 18 10

*/

// Standard librarry
#include <stdio.h>

void print(int array[], int counter);

// Main function
int main(){

    // Variable declaration
    int totalInput, input, increment, oddCounter, evenCounter, oddArray[99], evenArray[99];

    // Variable inisialization
    oddCounter = 0;
    evenCounter = 0;

    // Input
    scanf("%d", &totalInput);

    for (increment = 0; increment < totalInput; increment++){
        
        scanf("%d", &input);

        // Condition when input is odd
        if (input % 2 != 0){
            
            oddArray[oddCounter] = input;
            oddCounter++;

        }

        // Condition when input is even
        else{

            evenArray[evenCounter] = input;
            evenCounter++;

        }
    }

    // Input
    scanf("%d", &totalInput);

    for (increment = 0; increment < totalInput; increment++){
        
        scanf("%d", &input);

        // Condition when input is odd
        if (input % 2 != 0){
            
            oddArray[oddCounter] = input;
            oddCounter++;

        }

        // Condition when input is even
        else{

            evenArray[evenCounter] = input;
            evenCounter++;

        }
    }

    // Printing odd array and even array
    print(oddArray, oddCounter);
    print(evenArray, evenCounter);
        
    return 0;
}

// Procedure for printing array
void print(int array[], int counter){

    // Variable declaration
    int increment;

    for (increment = 0; increment < counter; increment++){
        
        // Condition when current increment is not equal with counter - 1
        if (increment != (counter - 1)){

            printf("%d ", array[increment]);

        }
        
        // Condition when current increment is not equal with counter - 1
        else{

            printf("%d\n", array[increment]);

        }  
    }
}