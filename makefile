CC = gcc
CFLAGS = -std=c99 -Wall

pwd.out: pwd.c
	$(CC) $(CFLAGS) pwd.c -o pwd.out
