#include <stdio.h>

int main() {
  int c, blanks, tabs, newlines;

  blanks = 0;
  tabs = 0;
  newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++newlines;
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++blanks;
  }

  printf("Blanks: %d, Tabs: %d, New Lines: %d\n", blanks, tabs, newlines);
}
