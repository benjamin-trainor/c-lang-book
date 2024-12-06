#include <stdio.h>

/* Write a program to copy its input to its output,
 * replacing each tab with \t, each backspace with \b,
 * and each backslash with \\.
 * This makes tabs and backspaces visible in an unambiguous way */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == 9) {
      putchar(92);
      putchar(116);
    } else if (c == 8) {
      putchar(92);
      putchar(98);
    } else {
      putchar(c);
    }
  }
}
