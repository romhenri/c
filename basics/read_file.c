#include <stdio.h>

int main()
{
	FILE *fptr;
	char myString[1000];
	// Lembrar que o path é relativo a execução;
	// Ele deve ser pensado para o código compilado e não o arquivo em C;
	fptr = fopen("../files/test3.txt", "r");

	// "w" para Escrever - "Write";
	// "a" para Acrescentar - "Appends";
	// "r" para Ler - "Read";

	if (fptr == NULL)
	{
		printf("Not able to open the file.");
	}

	fgets(myString, 1000, fptr);

	printf("%s\n", myString);

	while (fgets(myString, 100, fptr))
	{
		printf("%s", myString);
	}

	fclose(fptr);
	return 0;
}
