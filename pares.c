#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void makearray(int n, int array[n]) {
  for (int i = 0; i < n; i++) {
    array[i] = (rand() % 10) - 5;
  }
}

int pares(int n, int array[n]) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j && array[i] + array[j] == 0) count++;
    }
  }
  return count;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int array[n];
  makearray(n, array);
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  printf("%d\n", pares(n,array));
  return 0;
}
