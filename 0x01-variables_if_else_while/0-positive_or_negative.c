#include <stdio.h>

int main(void) {
  int n = 0;
  if (n < 0) {
    printf("%i is negative\n", n);
  }
  else if (n == 0) {
    printf("%i is zero\n", n);
  }
  else {
    printf("%i is positive\n", n);
  }
}
