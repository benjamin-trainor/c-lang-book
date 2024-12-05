#include "stdio.h"

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300 */

int main() {
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 150; /* upper limit */
  step = 5;    /* step size */

  celcius = lower;

  printf("Celcius to Fahrenheit Conversions\n");

  printf("Cel\tFahr\n");

  while (celcius <= upper) {
    fahr = celcius * (9.0 / 5.0) + 32;
    printf("%4.0f\t%6.1f\n", celcius, fahr);
    celcius = celcius + step;
  }
}
