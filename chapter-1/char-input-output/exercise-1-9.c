#include <stdio.h>

/* Write a program to copy it's input to its output,
 * replacing, each string of one or more blanks
 * by a single blank */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      putchar(c);

      while ((c = getchar()) != EOF && c == ' ')
        ;
    }

    putchar(c);
  }
}
