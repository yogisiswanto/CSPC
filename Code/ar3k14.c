/*
 *  Name Program    : ar3k14
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 22th Januari 2022
 *  Language        : C Language
 */

/*
Input 1
3
strata
satu
pendidikan
4
strategi
planologi
gatra
tetra

Output 1
strata        
      strategi
satu
    pendidikan
planologi
         gatra
tetra

Input 2
4
strata
satu
pendidikan
statuta
7
strategi
planologi
gatra
tetra
patra
terus
berjuang

Output 2
strata        
      strategi
satu
    pendidikan
statuta
       planologi
gatra
     tetra
patra
     terus
berjuang

*/

// Standard librarry
#include <stdio.h>
#include <string.h>

int checkThreeConsonant(char string[]);
void printString(int counter, char string[99][99]);

// Main function
int main(){

    // Variable declaration
    char inputString[99], threeConsonant[99][99], notThreeConsonant[99][99];
    int totalInput, increment, isThreeConsonant, threeConsonantCounter, notThreeConsonantCounter;

    // Inisialization varible
    threeConsonantCounter = 0;
    notThreeConsonantCounter = 0;

    // Input total data
    scanf("%d", &totalInput);

    // Loop for chech input
    for (increment = 0; increment < totalInput; increment++){

        scanf(" %s", &inputString);

        // Inisialization variable
        isThreeConsonant = 0;

        // Check input string
        isThreeConsonant = checkThreeConsonant(inputString);

        // Condition when isThreeConsonant is equal with 1
        if (isThreeConsonant == 1){
            
            strcpy(threeConsonant[threeConsonantCounter], inputString);

            threeConsonantCounter++;
        }

        // Condition when isThreeConsonant is equal with 0
        else {

            strcpy(notThreeConsonant[notThreeConsonantCounter], inputString);

            notThreeConsonantCounter++;
        }    
    }

    // Input total data
    scanf("%d", &totalInput);

    // Loop for chech input
    for (increment = 0; increment < totalInput; increment++){

        scanf("%s", &inputString);

        // Inisialization variable
        isThreeConsonant = 0;

        // Check input string
        isThreeConsonant = checkThreeConsonant(inputString);

        // Condition when isThreeConsonant is equal with 1
        if (isThreeConsonant == 1){
            
            strcpy(threeConsonant[threeConsonantCounter], inputString);

            threeConsonantCounter++;
        }

        // Condition when isThreeConsonant is equal with 0
        else {
            
            strcpy(notThreeConsonant[notThreeConsonantCounter], inputString);

            notThreeConsonantCounter++;
        }    
    }

    // Print string three consonant
    printString(threeConsonantCounter, threeConsonant);

    // Print string not three consonant
    printString(notThreeConsonantCounter, notThreeConsonant);

    return 0;
}

// Function for check three consonant string
int checkThreeConsonant(char string[])
{
    // Variable declaration
    int stringLength, increment, isThreeConsonant;

    // Variable inisialization
    stringLength = strlen(string) - 2;
    increment = 0;
    isThreeConsonant = 0;

    // Loop for check
    while ((isThreeConsonant == 0) && (increment < stringLength))
    {
        // Condition when current index char is consonant, current index + 1 char is consonant, current index + 2 char is consonant
        if (
            (string[increment] != 'a' && string[increment] != 'i' && string[increment] != 'u' && string[increment] != 'e' && string[increment] != 'o') &&
            (string[increment + 1] != 'a' && string[increment + 1] != 'i' && string[increment + 1] != 'u' && string[increment + 1] != 'e' && string[increment + 1] != 'o') &&
            (string[increment + 2] != 'a' && string[increment + 2] != 'i' && string[increment + 2] != 'u' && string[increment + 2] != 'e' && string[increment + 2] != 'o'))
        {
            isThreeConsonant = 1;
        }

        increment++;
    }

    return isThreeConsonant;
}

// Procedure for print string
void printString(int counter, char string[99][99])
{

    // Variable declaration
    int stringLengthBefore, increment, spaceIncrement;

    // Loop
    for (increment = 0; increment < counter; increment++)
    {

        // Condition when increment is not equal with 0
        if (increment % 2 != 0)
        {

            // Set string length before
            stringLengthBefore = strlen(string[increment - 1]);

            for (spaceIncrement = 0; spaceIncrement < stringLengthBefore; spaceIncrement++)
            {

                printf(" ");
            }
        }

        printf("%s\n", string[increment]);
    }
}