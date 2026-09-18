/**********************************************
 * A simpler and shorter implementation of ls * 
 **********************************************/
#include<stdio.h>
#include<dirent.h>
int listdir(const char *path){
	struct dirent *entry;
	DIR *dp;
	dp = opendir(path);
	if (dp == NULL) {
		perror("opendir");
		return -1;
	}
	while((entry = readdir(dp)))
		puts(entry->d_name);
	closedir(dp);
	return 0;
}
int main(int argc, char **argv){
	int counter = 1;
	if (argc == 1)
	listdir(".");
	while (++counter <= argc) {
		listdir(argv[counter-1]);
	}
	return 0;
}
