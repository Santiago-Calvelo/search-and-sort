#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int a[], int b, int c) {
  int temp = a[b];
  a[b] = a[c];
  a[c] = temp;
}

void sortarray(int n, int a[]) {
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (a[j] < a[j-1]) swap(a,j,j-1);
      else             break;
    }
  }
}

void print_arr(int n, int a[]) {
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

void makearray(int n, int a[]) {
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 10;
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int a[n];
  makearray(n, a);
  print_arr(n, a);
  sortarray(n, a);
  print_arr(n, a);
  return 0;
}
