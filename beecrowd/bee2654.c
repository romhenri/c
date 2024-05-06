#include <stdio.h>

typedef struct {
    char S[101];
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
    int P = 0, K = 0, M = 9999999;
    char S[101];
    strcpy(S,"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
    
    int indexBest = 0;
    
    for (int i = 0; i < size; i++){
        if(list[i].P > P) {
            P = list[i].P;
            K = list[i].K;
            M = list[i].M;
            strcpy(S, list[i].S);
            indexBest = i;
        }
        
        else if(list[i].P == P &&
            list[i].K > K) {
            K = list[i].K;
            M = list[i].M;
            strcpy(S, list[i].S);
            indexBest = i;
        }
        
        else if(list[i].P == P &&
        list[i].K == K &&
        list[i].M < M) {
            M = list[i].M;
            strcpy(S, list[i].S);
            indexBest = i;
        }
        
        else if(list[i].P == P &&
        list[i].K == K &&
        list[i].M == M
        ) {
            if(strcmp(list[i].S, S) < 0) {
                strcpy(S, list[i].S);
                indexBest = i;
            }
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