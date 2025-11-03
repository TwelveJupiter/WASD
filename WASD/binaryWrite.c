#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE* f = fopen("OS", "wb");
	char* s = malloc(20);
	strcpy(s, "Hola");
	fwrite(s, sizeof(char), 20, f);
	return 0;
}