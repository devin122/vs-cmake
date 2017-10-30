#include <stdio.h>
const char *foo();
int main(int argc, char **argv){
	printf("Hello World - %s\n", foo());
	return 0;
}