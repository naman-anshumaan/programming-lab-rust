#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *infile = fopen ("blah.txt", "r");
	char s[256];
	for (char i = 0; i<256; i = i+1){
		S[i] = i;
	}

	for (i = 0; i < 256; i = i + 1){
		printf("%d -> %d", i, S[i]);
	}
	
	return 0;

}
