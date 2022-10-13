#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swap(int a[], int min, int min_ind, int i) {
  int temp = a[i];
  a[min_ind] = temp;
  a[i] = min;
}

void selection(int a[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    int min = INT_MAX;
    int min_ind;
    for (int j = i; j < lenght; j++) {
      if (a[j] < min) {
        min = a[j];
        min_ind = j;
      }
    }
    swap(a,min,min_ind,i);
  }
}

void printarray(int a[], int lenght) {
  for (int i = 0; i < lenght; i++)
    printf("%d ", a[i]);
  printf("\n");
}

void makearray(int a[], int lenght) {
  for (int i = 0; i < lenght; i++)
    a[i] = rand() % 10;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[n];
  makearray(a,n);
  printarray(a,n);
  selection(a,n);
  printarray(a,n);
  return 0;
}
