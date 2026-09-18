CC = gcc
CFLAGS = -std=c99 -Wall

pwd: pwd.c
	$(CC) $(CFLAGS) pwd.c -o pwd
