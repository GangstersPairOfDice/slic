#include <stdio.h> // importing header which is a standard lib for common functions

// declare a buffer for user input of size 2048 characters
static char input[2048]; // static controls visibility outside of file - cannot be used externally

int main(int argc, char** argv) {

  // prints introduction, version, and exit information
  puts("Welcome to SLIC - Simple Lisp In C");
  puts("Current Version: 0.1");
  puts("Press Ctrl+C to Exit\n");

  // make a never ending loop
  while (1) {

    // Output our prompt
    fputs("slic> ", stdout); // we use fput to decide whether we want to add a \n, and to decide the file stream of the output

    // read a line of user input of a maximum size of 2048 characters
    fgets(input, 2048, stdin); // chars are stored in var `input`, with a size of 2048, in file stream `stdin` for keyboard input

    // echo input back to user
    printf("No you're a %s", input);
  }

  return 0; // returns 0, to tell main that it ran without any errors

}
