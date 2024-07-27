#include <stdio.h>
#define N_MAX 61

void inputVector(int *A, int T) {
  for (int i = 0; i < T; i++) {
    scanf("%d", &A[i]);
  }
}

void fibonacci(long long int *fibo, int max) {
  fibo[0] = 0;
  fibo[1] = 1;

  for (int i = 2; i <= max; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
}

void showFibonacci(int *testCases, long long int *fibo, int testLenght) {
  for (int i = 0; i < testLenght; i++) {
    printf("Fib(%d) = %lld\n", testCases[i], fibo[testCases[i]]);
  }
}

int main() {
  int testLenght;
  long long int fibo[N_MAX];

  scanf("%d", &testLenght);

  int testCases[testLenght];

  inputVector(&testCases, testLenght);
  fibonacci(&fibo, N_MAX);
  showFibonacci(&testCases, &fibo, testLenght);
  return 0;
}