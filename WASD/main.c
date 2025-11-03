#include <stdio.h>
#include <stdlib.h>

int* mem;

void initMemory(int size){
	mem = malloc(size);
}

void loadOS(){
	FILE* f = fopen("OS", "rb");
	int valor;
	int i = 0;
	while(fread(&valor, sizeof(int), 1, f)){
		mem[i++] = valor;
		if(valor == 0) break;
	}
	fclose(f);
}

int main(){
	initMemory(1024); //1kb
	
	loadOS();
	
	FILE* f = fopen("disk.txt", "wb");
	int* disk = (int*)malloc(20*sizeof(int));
	for(int i=0;i<20;i++){
		disk[i] += i*7;
	}
	fwrite(disk, 4, 20, f);
	fclose(f);
	
	return 0;
}