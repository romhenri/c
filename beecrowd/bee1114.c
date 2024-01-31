#include <stdio.h>
 
int main() {
  int end = 0;
  
  do {
    int userInput;
    scanf("%d", &userInput);
    if (userInput == 2002) {
      printf("Acesso Permitido\n");
      end = 1;  
    } else {
      printf("Senha Invalida\n");
    }
  } while (end == 0);
  
  return 0;
}