#include <stdio.h>

void recebeVetor(int rotulos[], int quantd) {
    for (int i=0; i<quantd; i++) {
        scanf("%d", &rotulos[i]);
    }
}

int countCombo(int rotulos[], int quantd, int types) {
    int combos[types + 1];
    int lowest = 1000000;
    
    for (int i = 0; i <= types; i++) {
        combos[i] = 0;
    }

    for (int i = 0; i < quantd; i++) {
        combos[rotulos[i]]++;
    }
    
    for (int i = 1; i <= types; i++) {
        if (combos[i] < lowest) {
            lowest = combos[i];
        }
    }

    return lowest;
}

int main() {
    int quantd, types, envios;
    
    scanf("%d %d", &quantd, &types);
    
    int rotulos[quantd];
    
    recebeVetor(rotulos, quantd);
    envios = countCombo(rotulos, quantd, types);
    
    printf("%d\n", envios);
    return 0;
}