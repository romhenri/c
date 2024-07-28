#include <stdio.h>
 
int main() {
    // 1 km -> 2 minutes
    
    int kms, minutes;
    
    scanf("%d", &kms);
    
    minutes = kms * 2;
    
    printf("%d minutos\n", minutes);
    return 0;
}