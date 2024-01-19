#include <stdio.h>
 
int main() {
  double value;
  
  scanf("%lf", &value);
  
  // Gets only int Part
  int money = value;
  // Get broken part as int (* 100) 
  int coins = (value - money) * 100;
  
  int money100 = money / 100; 
  int money50 = (money % 100) / 50;
  int money20 = ((money % 100) % 50) / 20;
  int money10 = (((money % 100) % 50) % 20) / 10;
  int money5 = ((((money % 100) % 50) % 20) % 10) / 5;
  int money2 = (((((money % 100) % 50) % 20) % 10) % 5) / 2;
  int coinOne = (((((money % 100) % 50) % 20) % 10) % 5) % 2;

  int coin50 = coins / 50;
  int coin25 = (coins % 50) / 25;
  int coin10 = ((coins % 50) % 25) / 10;
  int coin05 = (((coins % 50) % 25) % 10) / 5;
  int coin01 = ((((coins % 50) % 25) % 10) % 5) / 1;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", money100);
  printf("%d nota(s) de R$ 50.00\n", money50);
  printf("%d nota(s) de R$ 20.00\n", money20);
  printf("%d nota(s) de R$ 10.00\n", money10);
  printf("%d nota(s) de R$ 5.00\n", money5);
  printf("%d nota(s) de R$ 2.00\n", money2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", coinOne);
  printf("%d moeda(s) de R$ 0.50\n", coin50);
  printf("%d moeda(s) de R$ 0.25\n", coin25);
  printf("%d moeda(s) de R$ 0.10\n", coin10);
  printf("%d moeda(s) de R$ 0.05\n", coin05);
  printf("%d moeda(s) de R$ 0.01\n", coin01);
  return 0;
}