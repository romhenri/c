#include <stdio.h>

int main()
{
	FILE *fptr;
	// Lembrar que o path é relativo a execução;
	// Ele deve ser pensado para o código compilado e não o arquivo em C;
	fptr = fopen("../files/test1.txt", "w");

	// "w" para Escrever - "Write";
	// "a" para Acrescentar - "Appends";
	// "r" para Ler - "Read";

	fclose(fptr);
	return 0;
}
