#include <stdio.h>

/* Write a program to copy its input to its output,
 * replacing each tab with \t, each backspace with \b,
 * and each backslash with \\.
 * This makes tabs and backspaces visible in an unambiguous way */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else {
      putchar(c);
    }
  }
}
