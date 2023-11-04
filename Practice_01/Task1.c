
#include <stdio.h>

int main() {
  int i = 1;

  while (i <= 100) {
    if ((i % 6 == 0) ^ (i % 4 == 0)) {
      printf(" %d ", i);
    }

    i++;
  }
 
  return 0;
}