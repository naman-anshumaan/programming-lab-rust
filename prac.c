#include <stdio.h>

int main(){
printf("Helo world!\n");
	FILE*ptr;
	char c;
	int v;
	a = (int*)malloc(n*sizeof(int));
	ptr = fopen("class1.c", "r");
	if(ptr == NULL)
	{
		return 1;
	}
	while ((c=fgetc(ptr))!=EOF)
	{
		v = c - 'a';
		if (v >= 0 && v < 26)
		{
			A[v] = A[v] + 1;
		else
			A[26] = A[26] + 1;
		}
		printf("%c", c);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", A[i]);
	fclose(ptr);
return 0;
}
