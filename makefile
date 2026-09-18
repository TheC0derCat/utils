CC = gcc
CFLAGS = -std=c99 -Wall

pwd.out: pwd.c
	$(CC) $(CFLAGS) pwd.c -o pwd.out

ls.out: ls.c
	$(CC) $(CFLAGS) ls.c -o ls.out

cat.out: cat.c
	$(CC) $(CFLAGS) cat.c -o cat.out
