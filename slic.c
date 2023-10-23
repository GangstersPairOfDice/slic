#include <stdio.h> // importing header which is a standard lib for common functions
#include <stdlib.h> // gives us acess to the `free` function

#include <editline/readline.h> // read input from some prompt, while allowing editing of the input
//#include <editline/history.h> // lets us record history of inputs so we can retrieve with up and down arrow keys

// declare a buffer for user input of size 2048 characters
static char input[2048]; // static controls visibility outside of file - cannot be used externally

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
