#include<stdio.h>
int main(int argc, char **argv){	
	for(int i = 1; i < argc; i++){
		FILE *fp = fopen(argv[i], "r");
		char ch;
		if (fp == NULL) {
			printf("Unable to open file.");
			return 1;
		}
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);

		fclose(fp);
	}
	return 0;
}
