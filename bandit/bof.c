#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void func(int key){
        printf("Key; %i\n", key);
	char overflowme[32];
	printf("overflow me : ");
	gets(overflowme);	// smash me!
        printf("key: %i\n", key);
	if(key == 0xcafebabe){
		system("/bin/sh");
	}
	else{
		printf("Nah..\n");
	}
}
int main(int argc, char* argv[]){
	func(0xdeadbeef);
	return 0;
}
