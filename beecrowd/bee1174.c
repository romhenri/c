#include <stdio.h>
 
void inputVector (float *List, int size){
    for (int i = 0; i < size; i++){
        scanf("%f", &List[i]);
    }
}

void printVector (float *List, int size){
    for (int i = 0; i < size; i++){
        if (List[i] <= 10){
            printf("A[%d] = %.1f\n", i, List[i]);
        }
    }
}

int main() {
    float A[100];
    
    inputVector(&A, 100);
    printVector(&A, 100);
    return 0;
}