#include <stdio.h>
 
int main() {
    int DDD;
    
    scanf("%d", &DDD);
    
    if (DDD == 61) {
        printf("Brasilia");
    } else if (DDD == 71) {
        printf("Salvador");
    } else if (DDD == 11) {
        printf("Sao Paulo");
    } else if (DDD == 21) {
        printf("Rio de Janeiro");
    } else if (DDD == 32) {
        printf("Juiz de Fora");
    } else if (DDD == 19) {
        printf("Campinas");
    } else if (DDD == 27) {
        printf("Vitoria");
    } else if (DDD == 31) {
        printf("Belo Horizonte");
    } else {
        printf("DDD nao cadastrado");
    }
    printf("\n");
    return 0;
}