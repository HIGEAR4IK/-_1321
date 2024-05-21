#include <stdio.h>
/*!
    \brief Processing character strings
    \author Nikita
    \date 15 February, 2024
    \time 16:52
*/
// Function for checking a character for a letter
int is_alpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

//A function for splitting a string into words
void split_string(char *str) {
    int count = 1; //a counter for counting words
    char *word_start = str; /// The ptr pointer is used to iterate through characters in a string and detect spaces. 
    ///If a space is found, the program checks whether the current word is odd, and if so, it is displayed on the screen.
    char *ptr = str; // a pointer to iterate through the characters of a string

    while (*ptr) { // until the end of the line is reached
        if (*ptr == ' ' || *ptr == '\n' || *(ptr + 1) == '\0') { // if the character is a space or a line feed, or the end of the line has been reached
            if (count % 2 != 0 && is_alpha(*word_start)) { // if the word is odd and starts with a letter
                if (*(ptr + 1) == '\0' && *ptr != ' ' && *ptr != '\n') { // if the next character is the end of the line, and the current one is not a space or a line feed
                    printf("%s ", word_start); // print the word
                } else {
                    *ptr = '\0'; // put the end of the word
                    printf("%s ", word_start); //print the word
                    *ptr = ' '; // set the space bar again
                }
            }
            count++; //increase the word count
            word_start = ptr + 1; // set the pointer to the beginning of the next word
        }
        ptr++; // go to the next character
    }
}

int main(void) {
    char str[1000]; //an array for storing a string
    fgets(str, 1000, stdin); // read a string from the standard input

    split_string(str); // split a string into words

    return 0;
}