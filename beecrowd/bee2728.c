#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50

void getCobol(char phrase[], int *cobol) {
    int count = 0, size = strlen(phrase);
    int vector[7];
    
    for (int i = 0; i < size; i++){
        phrase[i] = tolower(phrase[i]);
    }
    
    for (int i = 0; i < size; i++){
        if (phrase[i] == '-' || i == size-1 || i == 0) {
            vector[count] = i;
            count++;
        }
    }
    
    if (phrase[vector[0]] == 'c' || phrase[vector[1]-1] == 'c'){
        (*cobol)++;
    }
    if (phrase[vector[1]+1] == 'o' || phrase[vector[2]-1] == 'o'){
        (*cobol)++;
    }
    if (phrase[vector[2]+1] == 'b' || phrase[vector[3]-1] == 'b'){
        (*cobol)++;
    }
    if (phrase[vector[3]+1] == 'o' || phrase[vector[4]-1] == 'o'){
        (*cobol)++;
    }
    if (phrase[vector[4]+1] == 'l' || phrase[vector[5]] == 'l'){
        (*cobol)++;
    }
}

int main() {
    int cobol[18], vector[7];
    char phrase[SIZE];
    
    for (int i = 0; i < 18; i++){
        cobol[i]= 0;
        scanf("%s", phrase);
        getCobol(phrase, &cobol[i]);
    }
    
    for (int i = 0; i < 18; i++){
        if (cobol[i] == 5){
            printf("GRACE HOPPER\n");
        } else {
            printf("BUG\n");
        }
    }
    
    return 0;
}