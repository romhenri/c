#include <stdio.h>
 
void inputM(float M [][12], int C, char T) {
  float total = 0;
  
  for (int j = 0; j < 12; j++) {
    for (int i = 0; i < 12; i++) {
      scanf("%f", &M[j][i]);
    }
  }
  
  for (int k = 0; k < 12; k++) {
    total += M[k][C];
  }
  
  float average = total / 12;
  if (T == 'S'){
    printf("%.1f\n", total);
  } else {
    printf("%.1f\n", average); 
  }
}
 
int main() {
  int C;
  char T;
  float M [12][12];
  
  scanf("%d %c", &C, &T);
  
  inputM(M, C, T);
  return 0;
}