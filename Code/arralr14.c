/*
 *  Name Program    : arralr14
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 16th March 2022
 *  Language        : C Language
 */

/*
Input 1
=======
2
alay
r3sm1
3
4l4y
beneran
resmi

Output 1
========
r3sm1
     4l4y
alay       resmi
    beneran

Input 2
=======
5
3aa
l4l4l4
y3y3y3
beneran
alay
4
ya
memang
b3n3ran
4l4y

Output 2
========
3aa      y3y3y3       4l4y
   l4l4l4      b3n3ran
beneran    ya
       alay  memang

*/

// Standard librarry
#include <stdio.h>
#include <string.h>

int checkSlangWord(char input[]);
void print(char array[99][99], int counter);

// Main function
int main(){

    // Variable declaration
    char input[99], slangWord[99][99], normalWord[99][99];
    int totalInput, increment, isSlangWord, slangWordCounter, normalWordCounter;

    // Variable inisialization
    slangWordCounter = 0;
    normalWordCounter = 0;

    scanf("%d", &totalInput);

    for (increment = 0; increment < totalInput; increment++){

        scanf("%s", &input);

        isSlangWord = checkSlangWord(input);

        // Condition when isSlangWord is true
        if (isSlangWord == 1){

            strcpy(slangWord[slangWordCounter], input);
            slangWordCounter++;
            
        }

        // Condition when isSlangWord is false
        else{

            strcpy(normalWord[normalWordCounter], input);
            normalWordCounter++;

        } 
    }

    // Second input
    scanf("%d", &totalInput);

    for (increment = 0; increment < totalInput; increment++){

        scanf("%s", &input);

        isSlangWord = checkSlangWord(input);

        // Condition when isSlangWord is true
        if (isSlangWord == 1){

            strcpy(slangWord[slangWordCounter], input);
            slangWordCounter++;
            
        }

        // Condition when isSlangWord is false
        else{

            strcpy(normalWord[normalWordCounter], input);
            normalWordCounter++;

        } 
    }

    // Print array
    print(slangWord, slangWordCounter);
    print(normalWord, normalWordCounter);

    return 0;
}

// Function for get slang word or not
int checkSlangWord(char input[]){

    // Variable declaration
    int incrementChar, isSlangWord, inputLength;

    // Variable inisialization
    inputLength = strlen(input);
    incrementChar = 0;
    isSlangWord = 0;

    // Loop
    while ((incrementChar < inputLength) && (isSlangWord == 0)){

        // Condition when current character value contain 4, 3, 1, 0
        if ((input[incrementChar] == '4') || (input[incrementChar] == '3') || (input[incrementChar] == '1') || (input[incrementChar] == '0')){

            isSlangWord = 1;
        
        }

        // Condition when current character value not contain 4, 3, 1, 0
        else{

            incrementChar++;
        
        }
    }

    return isSlangWord;
}

// Procedure for printing array
void print(char array[99][99], int counter){

    // Variable declaration
    int increment, incrementSpace, wordLength;

    // Loop for even index
    for (increment = 0; increment < counter; increment++){

        // Condition when current index is even
        if (increment % 2 == 0){

            printf("%s", array[increment]);

            // Condition when current index is less than counter - 2
            if  (increment < (counter - 2)){

                // Set word length
                wordLength = strlen(array[increment + 1]);

                // Loop for print space
                for (incrementSpace = 0; incrementSpace < wordLength; incrementSpace++)
                {

                    printf(" ");
                }
            }
        }         
    }

    printf("\n");

    // Loop for odd index
    for (increment = 0; increment < counter; increment++){

        // Condition when current index is even
        if (increment % 2 != 0){

            // Set word length
            wordLength = strlen(array[increment - 1]);

            // Loop for print space
            for (incrementSpace = 0; incrementSpace < wordLength; incrementSpace++){
                
               printf(" ");

            }

            printf("%s", array[increment]);

        }   

    }

    printf("\n");
}