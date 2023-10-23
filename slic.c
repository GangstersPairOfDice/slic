#include <stdio.h> // importing header which is a standard lib for common functions
#include <stdlib.h> // gives us acess to the `free` function

// if we are compiling on windows, compile these funcitons
#ifdef _WIN32
#include <string.h>

// declare a buffer for user input of size 2048 characters
static char buffer[2048]; // static controls visibility outside of file - cannot be used externally

// fake readline function
char* readline(char* prompt) {
  fputs(prompt, stdout); // outputs prompt
  fgets(buffer, 2048, stdin); // gets input from user, and stores it in buffer
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy(strlen(cpy)-1) = '\0';
  return cpy;
}

// fake add_history function
void add_history(char* unused) {}

// otherwise, include the editline headers
#else
#include <editline/readline.h> // read input from some prompt, while allowing editing of the input
#endif

int main(int argc, char** argv) {

  // prints introduction, version, and exit information
  puts("Welcome to SLIC - Simple Lisp In C");
  puts("Current Version: 0.1");
  puts("Press Ctrl+C to Exit\n");

  // make a never ending loop
  while (1) {

    // outputs prompt and gets input
    char* input = readline("slic> ");

    // add input to history
    add_history(input);

    // echo input back to user
    printf("No you're a %s\n", input);

    // free retrieved input ( deletes readline input, since it allocates new memory when called )
    free(input);
  }

  return 0; // returns 0, to tell main that it ran without any errors

}
