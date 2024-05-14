#include <stdio.h>
 
void readList(int *list, int size){
  for (int i = 0; i < size; i++){
    scanf("%d", &list[i]);
  }
}

void normalizeList(int *list, int size){
  for (int i = 0; i < size; i++) {
    if (list[i] < 1) {
      list[i] = 1;
    }
  }
}

int main() {
  int list[10];
  
  readList(&list, 10);
  normalizeList(&list, 10);
  return 0;
}