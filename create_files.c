#include <stdio.h>

int main()
{
	FILE *fptr;
	fptr = fopen("../files/test1.txt", "w");

	fclose(fptr);
	return 0;
}
