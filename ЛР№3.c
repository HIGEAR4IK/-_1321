#include <stdio.h>
#include <stdlib.h>
/*!
    \brief processing the character stream
    \author Nikita
    \date 13 February, 2024
    \time 19:44
*/

int main(void) ///\ It acts as a global function. Indicates the designated launch of the project in a particular environment
{ //
    int c; // the current character from the stream
    int word = 0; // word counter
    int flag = 0; // a flag indicating that the previous character was a vowel

    // reading characters from the stream to the end of the file
    while ((c = getchar()) != EOF) {
///\ if the current character is a letter and the previous character was not a vowel,
///\ then this is a new word, increase the word counter
        if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') && flag == 0) {
            if (c == 'a' || c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o'
                   || c == 'A' || c == 'E' || c == 'Y' || c == 'U' || c == 'I' || c == 'O') {
                word++; // The counter increases when a vowel letter is detected
            }
            flag = 1; // setting the flag that the previous character was a vowel
        } else if ( c == ' ' || c == '.' || c == '\n' || c == ',' || c == ' \t ') {
            flag = 0; // we reset the flag, since the current character is a word separator
        }
    }
    printf("The number of words starting with a vowel letter: %d\n", word); // displaying the number of words starting with a vowel letter

    return 0;
} // end of the program

