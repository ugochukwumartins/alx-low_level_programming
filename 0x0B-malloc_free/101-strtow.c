#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
if (str == NULL || str[0] == '\0') { // if the string is empty return NULL
return NULL;
}

int words = 0; // initialize word counter

for (int i = 0; str[i] != '\0'; i++) { // loop to count words in the string
if (((i > 0) && (str[i - 1] != ' ')) || (str[i] != ' ')) {
words++; // increment word counter } }

char **wordsArray = (char**) malloc((words + 1)* sizeof(char*)); // allocate array of pointers for each word in the string

int posStart = 0; int posEnd; int j = 0; // initialize start and end positions, as well as an index pointer to keep track of location in array of pointers

for (int i = 0; str[i] != '\0'; i++) { if (((i > 0) && (str[i - 1]) == ' ') || (posStart == 0)){ posStart= i ; } else if ((str [i+1])=='\0' || str [i+1]==' '){ posEnd= i+1 ; wordsArray [j]= malloc((posEnd-posStart)+1); memcpy(wordsArray [j], &(str[posStart]),((posEnd-posStart))); wordsArray [j][((posEnd-posStart))]= "\0"; j++; } }

wordsArray [(words)]= NULL ;// set last element of array to null for safety reasons and end pointer return wordsArray ;//return array of strings/pointers}
