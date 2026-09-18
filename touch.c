#include<stdio.h>
int main(int argc, char **argv){
	for(int i = 1; i <argc; i++){
		FILE *fptr;
		fptr = fopen(argv[i], "a");
		fclose(fptr);
	}
}
