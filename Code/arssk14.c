/*
 *  Name Program    : arssk14
 *  Purpose         : Logic Algorithm and Basic Programming Exercise
 *  Author          : Yogi Siswanto
 *  Email           : yogisiswanto.c2@gmail.com
 *  Date Created    : 19th March 2022
 *  Language        : C Language
 */

/*
Input 1
=======
3
nanatata
nata
natata
2
nanana
lalala
na ta

Output 1
========
tidak valid

Input 2
=======
2
aaalala
aaanananalala
3
aaatalala
aatata
aaayalala
aaa lala

Output 2
========
valid

Input 3
=======
2
at
att
2
aaatttt
aaaattttt
a t

Output 3
========
valid

*/

// Standard librarry
#include <stdio.h>
#include <string.h>

int finding(char array[][99], int input, char findingWord[]);

// Main function
int main(){

    // Variable declaration
    char firstArray[99][99], secondArray[99][99], firstWord[99], secondWord[99];
    int firstInput, secondInput, increment, isFinding, findingFirstInput, findingSecondInput;

    // Variable inisialization 
    isFinding = 0;
    findingFirstInput = 0;
    findingSecondInput = 0;

    // First input
    scanf("%d", &firstInput);

    for (increment = 0; increment < firstInput; increment++){

        scanf("%s", &firstArray[increment]);
        
    }

    // // Second input
    // scanf("%d", &secondInput);

    // for (increment = 0; increment < secondInput; increment++){

    //     scanf("%s", &secondArray[increment]);

    // }

    // Input word for finding
    scanf("%s", &firstWord);
    scanf("%s", &secondWord);



        isFinding = finding(firstArray, firstInput, firstWord);

        printf("%d", isFinding);

        // // Condition when finding is equal with true
        // if (isFinding == 1){

        //     findingFirstInput++;

        // }
        
    

    return 0;
}

// Function for finding substring in array
int finding(char array[][99], int input, char findingWord[]){

    // Varible declaration
    int incrementRow, incrementColumn, stringlength, findingWordLength, findingWordIncrement, findingWordCounter, totalFindingWord;

    // Variable inisialization
    findingWordLength = strlen(findingWord);
    totalFindingWord = 0;

    // Loop array
    for (incrementRow = 0; incrementRow < input; incrementRow++){

        // Get string length at current index
        stringlength = strlen(array[incrementRow]);
        findingWordCounter = 0;

        for (incrementColumn = 0; incrementColumn < stringlength; incrementColumn++){
            
            for (findingWordIncrement = 0; findingWordIncrement < findingWordLength; findingWordIncrement++){

                printf("index-x = %d, index-y = %d, char array[%d][%d] = %c, char findingWord = %c\n", incrementRow, incrementColumn, incrementRow, incrementColumn, array[incrementRow][incrementColumn + findingWordIncrement], findingWord[findingWordIncrement]);

                // Condition when array char at current index equal with first finding word char at current index
                if (array[incrementRow][incrementColumn + findingWordIncrement] == findingWord[findingWordIncrement]){
                    
                  findingWordCounter++;  
                    
                }
            }

            // Condition when firstFindingWordCounter is equal with firstFindingWordLength
            if (findingWordCounter = findingWordLength){
                
                totalFindingWord++;

            }
        }
    }

    return totalFindingWord;
    
}