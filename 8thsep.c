#include <stdio.h>

int main(){
	srand(5);
	int s[26];
	for(i = 0; i<26; i++){
		s[i] = i;
		printf("%d\n", s[i]);
	}

	return 0;
}




void shuffleArray(int * A, int n){
	for (i = n - 1; i > 0; i = i - 1){
		j = rand()%i;
		swap (A, i, j);
	}

void rotateArray(int * A, int n, int rot){
	int * buf = (int *) malloc (rot * sizeof(int));
	memcpy(buf, A, rot * sizeof(int));
	for(i = rot; i < n; i = i + 1){A[i - rot] = A[i];}
	memcpy(&A[n - rot], buf, rot * sizeof(int))

int S[26];
for (i = 0; i<26; i = i + 1){S[i] = i;}
rotateArray (S, 26, 3);
while((c = fgetc(infile)) ! = EOF){
	if( c >= 'a' && c <= 'z'){
		c = 'a' + S[c - 'a'];
	}
	fputc(c, putfile),
}
