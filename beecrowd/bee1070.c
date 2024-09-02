int main() {
  int X;

  scanf("%d", &X);

  if (X % 2 == 1) {
    printf("%d\n", X);
  } else if (X % 2 == 0) {
    X++;
    printf("%d\n", X);
  }

  for (int i = 1; i <= 5; i++) {
    printf("%d\n", X + (i * 2));
  }
  return 0;
}