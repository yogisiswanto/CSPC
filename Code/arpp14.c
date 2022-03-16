/*
 *  Name Program    : arpp14
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 16th March 2022
 *  Language        : C Language
 */

/*
Input 1
=======
4
2
10
3
5
1
5
6
3

Output 1
========
2 10
1 5

Input 2
=======
5
12
10
7
15
1
6
5
8
3
9

Output 2
========
12 10 15
6 5 3

*/

// Standard librarry
#include <stdio.h>

void print(int array[], int counter);

// Main function
int main(){

    // Variable declaration
    int firstArray[99], secondArray[99], numeratorArray[99], denominatorArray[99];
    int totalData, increment, counter;

    // Variable inisialization
    counter = 0;

    // Input
    scanf("%d", &totalData);

    for (increment = 0; increment < totalData; increment++){
        
        scanf("%d", &firstArray[increment]);
        
    }
    
    for (increment = 0; increment < totalData; increment++){
        
        scanf("%d", &secondArray[increment]);
        
    }
    
    // Loop for checking
    for (increment = 0; increment < totalData; increment++){
        
        // Condition when firstArray value at current index is modulo by secondArray value at current index
        if (firstArray[increment] % secondArray[increment] == 0){
            
            numeratorArray[counter] = firstArray[increment];
            denominatorArray[counter] = secondArray[increment];
            counter++;

        }
        
    }

    // Printing array value
    print(numeratorArray, counter);
    print(denominatorArray, counter);

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
