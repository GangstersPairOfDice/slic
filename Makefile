CC = cc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LIBS = -ledit

slic: slic.c
	$(CC) slic.c $(LIBS) -o slic $(CFLAGS)

