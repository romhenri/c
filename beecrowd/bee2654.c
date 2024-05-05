#include <stdio.h>

typedef struct {
    char S[100];
    int P, K, M;
} hero;

void inputHeroes(hero list[], int size) {
    for (int i = 0; i < size; i++){
        scanf("%s", list[i].S);
        scanf("%d", &list[i].P);
        scanf("%d", &list[i].K);
        scanf("%d", &list[i].M);
    }
}

void theGodofor(hero list[], int size){
    hero best;
    best.P = 0;
    best.K = 0;
    best.M = 9999999;
    
    int indexBest = 0;
    
    for (int i = 0; i < size; i++){
        if(list[i].P > best.P) {
            best.P = list[i].P;
            indexBest = i;
        }
        
        if(list[i].P == best.P &&
            list[i].K > best.K) {
            best.K = list[i].K;
            indexBest = i;
        }
        
        if(list[i].P == best.P &&
        list[i].K == best.K &&
        list[i].M < best.M) {
            best.M = list[i].M;
            indexBest = i;
        }
    }
    
    printf("%s\n", list[indexBest].S);
}
 
int main() {
    int heroesNumber;
    scanf("%d", &heroesNumber);
    
    hero heroes[heroesNumber];
    
    inputHeroes(heroes, heroesNumber);
    theGodofor(heroes, heroesNumber);
 
    return 0;
}