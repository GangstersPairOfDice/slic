# SLIC - Simple Lisp In C

`slic` is a simple lisp language written in C, guided by [Build Your Own Lisp](https://buildyourownlisp.com)

## Usage

C is a compiled language. That means we need to run our program through a C compiler to turn it into an executable file. We then run that executable like we would run any other program on the command line.

## Compiling with `cc`

To compile slic.c, run `cc bum.c -o bum` in your terminal shell. If no errors occur, this will produce an executable named `slic`. `-o` stands for “output”, and specifies that the output executable should be named `slic`.

## Compiling with `make`

Typing `cc slic.c -o slic` every time you want to recompile gets tiring. The `make` program allows you to simply run `make` and it will compile the program for you.

## Running `slic`

After compiling, to run `slic`, type `./slic` in your terminal shell and Enter/Return.
