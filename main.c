#include <stdio.h>

int main() {
  
  int num, sum = 0;
  printf("Enter a natural number till you want to add!\n");
  scanf("%d", &num);
  for(int i = 0; i <= num; i++){
    sum +=i;

  }
  printf("Sum of first %d natural numbers is: %d", num, sum);
  return 0;
}