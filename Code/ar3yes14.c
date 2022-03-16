/*
 *  Name Program    : ar3yes14
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 10th March 2022
 *  Language        : C Language
 */

/*
Input 1
=======
2
4
6
4
3
4
11
12
6
1
2
3
4
5
6

Output 1
========
4 3 2
11 6 5

Input 2
=======
4
24
11
3
6
4
12
10
5
7
2
7
8

Output 2
========
17 11 7
8 6 4

*/

// Standard librarry
#include <stdio.h>

void printSorting(int array[]);

// Main function
int main(){

    // Variable declaration
    int halfStartIncrement, halfEndIncrement, halfStartAverageArray[99], halfEndAverageArray[99];
    int totalProccess, totalInput, input, increment, temporary;

    // Variable inisialization
    halfStartIncrement = 0;
    halfEndIncrement = 0;

    // Loop for proccess
    for (totalProccess = 0; totalProccess < 3; totalProccess++)
    {
        // Inisialization temporary
        temporary = 0;

        // Get total input
        scanf("%d", &totalInput);

        // Half start input
        for (increment = 0; increment < (totalInput / 2); increment++)
        {
            scanf("%d", &input);

            temporary = temporary + input;
        }

        halfStartAverageArray[halfStartIncrement] = temporary / (totalInput / 2);

        // Reinisialization temporary
        temporary = 0;

        // Half end input
        for (increment = 0; increment < (totalInput / 2); increment++)
        {
            scanf("%d", &input);

            temporary = temporary + input;
        }

        halfEndAverageArray[halfEndIncrement] = temporary / (totalInput / 2);

        // Counter increment
        halfStartIncrement++;
        halfEndIncrement++;
    }

    printSorting(halfStartAverageArray);
    printSorting(halfEndAverageArray);

    return 0;
}

// Procedure for sorting
void printSorting(int array[]){

    // Condition when first index array value is greater than second index array value and first index array value is greater than third index array value
    if ((array[0] > array[1]) && (array[0] > array[2]))
    {
        // Condition when second index arra value is greater than third index array value
        if (array[1] > array[2])
        {
            printf("%d %d %d\n", array[0], array[1], array[2]);
        }        

        // Condition when second index arra value is less than third index array value
        else
        {
            printf("%d %d %d\n", array[0], array[2], array[1]);
        }        
    }

    // Condition when first index array value is less than second index array value and second index array value is greater than third index array value
    else if ((array[0] < array[1]) && (array[1] > array[2]))
    {        
        // Condition when first index array value is greater than third index array value
        if (array[0] > array[2])
        {            
            printf("%d %d %d\n", array[1], array[0], array[2]);
        }

        // Condition when first index array value is less than third index array value
        else
        {
            printf("%d %d %d\n", array[1], array[2], array[0]);
        }        
    }

    // Condition when first index array value is less than third index array value and second index array value is less than third index array value
    else
    {
        // Condition when first index array value is greater than second index array value
        if (array[0] > array[1])
        {
            printf("%d %d %d\n", array[2], array[0], array[1]);
        }

        // Condition when first index array value is less than second index array value
        else
        {
            printf("%d %d %d\n", array[2], array[1], array[0]);
        }   
    }
}


