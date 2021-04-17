#include <stdio.h>

int main(void) {
  float num1, num2;
  printf("Please give the first rational number!\n");
  scanf("%f", &num1);
  printf("Please give the second rational number!\n");
  scanf("%f", &num2);
  float result = num1+num2/2; 
printf("A rational number between %f and %f is %f", num1, num2, result);
 return 0;
}
