#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

// Checks if inputted string is valid (Numbers)
bool validFunction(const char test[]) {
  
  for(int x = 0; x <= strlen(test) - 1; x++) {
    if(test[x] >= 58 || test[x] <= 47){
      return false;
    }
  }
 
  if(test[0] == 48) {
    return false;
  }
  
  return true;
}

// Function that runs the function above on all 3 inputted strings
bool valid(const char sa[], const char sb[], const char sc[]) {

    int checkValid = validFunction(sa);
  
    if(checkValid == 0){
      return false;
    } else {
      checkValid = validFunction(sb);
      if(checkValid == 0){
        return false;
      } else {
        checkValid = validFunction(sc);
        if(checkValid == 0){
          return false;
        }
      }
    }
    return true;
}

// Converts the inputted numbers in 8 bit binary and prints
int printBinary(int number) {
    int binary[8];
    int push;
    
    for(int x = 7; x >= 0; x--){
      push = number % 2;
      binary[x] = push;   
      number = number / 2;
    }
  
    for(int x = 0; x <= 7; x++){
      printf("%d", binary[x]);
    }
    printf("\n");
  
    return 0;
}

int validifyAndSort(const char sa[], const char sb[], const char sc[]) {
    int numbers[3];
  
    // Checks if inputs are valid
    int validTest = valid(sa, sb, sc);
  
    if(validTest == 0){
      printf("Input invalid\n");
      return 0;
    } else {
      numbers[0] = atoi(sa);
      numbers[1] = atoi(sb);
      numbers[2] = atoi(sc);
      
      // Max inputted number cant exceed 255 
      // 255 is max denary number that can be represented in 8 bits binary
      for(int x = 0; x <= 2; x++) {
        if(numbers[x] > 255) {
          printf("Input too high\n");
          return 0;
        }
      }
      printf("Input valid\n");
    }
  
    // Bubble sort to sort inputted numbers from highest to lowest
    for(int y = 0; y < 3; y++) {
      for(int x = 0; x < 2; x++) {
        if(numbers[x] < numbers[x + 1]) {
          int store = 0;
          store = numbers[x];
          numbers[x] = numbers[x + 1];
          numbers[x + 1] = store;
        } 
      }
    }
  
    for(int x = 0; x <= 2; x++) {
      printf("%d: ", numbers[x]);
      printBinary(numbers[x]);
    }
  
    return 0;
}

int main(int n, char **argv) {
    if (n == 4) {
        validifyAndSort(argv[1], argv[2], argv[3]);
    }
    else {
        fprintf(stderr, "Use e.g.: ./rle 3 4 5\n");
        exit(1);
    }
    return 0;
}