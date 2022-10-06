#include <stdio.h>
#include <stdlib.h>

void chain(int n) {
  printf("%d - ", n);
  int i = 2;
  while (n != 1) {
    if (n % i == 0) {
      printf("%d - ", n / i);
      n /= i;
    }
    else
      i ++;
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  chain(n);
  return 0;
}
