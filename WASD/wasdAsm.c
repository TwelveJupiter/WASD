#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* RAM = malloc(1024);
char* registros = malloc(12);
int programCounter = 0;


void mostrarRegistros(char* registros){
	
	for(int i=0;i<64;i++) printf("-");
	printf("\n");
	
	
	for(int i=0;i<8;i++){
		printf("%d\t", i);
	}
	printf("\n");
	for(int i=0;i<8;i++){
		printf("%d\t", (int)registros[i]);
	}
	printf("\n");
	printf("\n");
	
	for(int i=0;i<4;i++){
		printf("%d\t", i);
	}
	printf("\n");
	for(int i=8;i<12;i++){
		printf("%d\t", (int)registros[i]);
	}
	printf("\n");
}

char obtenerInstruccionBinaria(char* ins, int a1, int a2){
	if(strcmp(ins, "sys")==0){
			
		} else if(strcmp(ins, "ldi")==0){
			
		} else if(strcmp(ins, "mem")==0){
			
		} else if(strcmp(ins, "jmp")==0){
			
		} else if(strcmp(ins, "arh")==0){
			switch((int)registros[11]){
				case 0:
					
					
					break;
				default:
					break;
			}
		} else if(strcmp(ins, "lgc")==0){
			
		} else if(strcmp(ins, "cpy")==0){
			
		} else if(strcmp(ins, "arg")==0){
			
		}
}


void compilar(char* RAM, char* registros){
	
	FILE* entrada = fopen("program.wasd", "r");
	FILE* salida = fopen("RAM", "wb");
	
	
	char* buffer = malloc(32);
	char* token;
	
	char* func;
	char** arg = (char**)malloc(2*sizeof(char*));
	int* intArg = malloc(2*sizeof(int));
	
	char ins;
	
	for(int i=0;i<2;i++){
		argumentos[i] = malloc(4);
	}
	
	while(fgets(buffer, 32, f) != NULL){
		token = strtok(buffer, " ");
		strcpy(func, token);
		int i = 0;
		while((token = strtok(NULL, " ")) != NULL){
			strcpy(argumentos[i], token);
			intArg[i] = atoi(argumentos[i]);
			i++;
		}
		
		ins = obtenerInstruccionBinaria(func, intArg[0], intArg[1]);
		
		
		
	}
	fclose(f);
	
	
	
	return;
}

void ejecutar(){
	
}


int main(){
	
	registros[0] = 0;
	
	
	compilar();
	ejecutar();
	
	
	mostrarRegistros();
	
	
	return 0;
}