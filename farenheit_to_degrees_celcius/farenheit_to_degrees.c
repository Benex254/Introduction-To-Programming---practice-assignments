// Write a program that converts farenheit to degrees celcius given;
// degrees=5/9*(farenheit-32)?
#include "stdio.h"

int main() {
  double farenheit;

  printf(""
         ""
         "\n");
  printf("Welcome to TempConvert\nYour all in one temperature convertion "
         "solution\n");
  printf(""
         ""
         "\n");
  printf("Enter temperature in degrees to convert to farenheit: ");
  scanf("%lf", &farenheit);
  printf(""
         ""
         "\n");
  printf("Successfuly converted 😄\n%lf farenheit to degrees is %lfC\n",
         farenheit, (5.0 / 9.0 * (farenheit - 32)));

  printf(""
         ""
         "\n");
  return 0;
}
