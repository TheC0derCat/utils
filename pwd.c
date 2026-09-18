#include<stdio.h>
#include<unistd.h>
int main(void){
	char buf[100];
	printf("%s\n", getcwd(buf, 100));
	return 0;
}
