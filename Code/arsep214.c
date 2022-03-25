/*
 *  Name Program    : arsep214
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
1
2
3
4
2
4
3

Output 1
========
valid

Input 2
=======
4
1
2
3
4
4
5
6
0
3

Output 2
========
valid

Input 3
=======
6
1
2
3
4
5
6
2
4
7

Output 3
========
tidak valid

*/

// Standard librarry
#include <stdio.h>

// Main function
int main(){

    // Variable declaration
    int totalInput, input, increment, firstSum, secondSum;

    // Variable inisialization
    firstSum = 0;
    secondSum = 0;

    // First input
    scanf("%d", &totalInput);

    for (increment = 0; increment < totalInput; increment++){
        
        scanf("%d", &input);

        // Condition when current index is less than half of total input
        if (increment < (totalInput / 2)){

            firstSum = firstSum + input;

        }       
    }

    // Second input
    scanf("%d", &totalInput);

    for (increment = 0; increment < totalInput; increment++){
        
        scanf("%d", &input);

        // Condition when current index is less than half of total input
        if (increment >= (totalInput / 2)){

            secondSum = secondSum + input;

        }       
    }

    // Condition when firstSum is equal with secondSum
    if (firstSum == secondSum){

        printf("valid\n");
        
    }

    // Condition when firstSum is not equal with secondSum
    else{

        printf("tidak valid\n");

    }  

    return 0;
}
