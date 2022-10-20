#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *a[], char *aux[], int lo, int hi) {
  // caso base
  if (hi - lo <= 1) return;
  // dividir recursivamente
  int mid = lo + (hi-lo) / 2;
  sort(a,aux,lo,mid);
  sort(a,aux,mid,hi);
  // merge
  int i = lo;
  int j = mid;
  for (int k = lo; k < hi; k++) {
    if      (i == mid)    aux[k] = a[j++];
    else if (j == hi)     aux[k] = a[i++];
    else if (strcmp(a[j], a[i]) < 0) aux[k] = a[j++];
    else                  aux[k] = a[i++];
  }
  // copy back
  for (int k = lo; k < hi; k++)
    a[k] = aux[k];
}

void printarray(char *a[], int n) {
  printf("[ ");
  for (int i = 0; i < n; i++)
    printf("%s ", a[i]);
  printf("]\n");
}

int main(int argc, char *argv[]) {
  int n = 4;
  char *list[4] = {
    "Trini",
    "Anaya",
    "DeBarros",
    "Gadea"
  };
  char *aux[4];
  printarray(list, n);
  sort(list, aux, 0, n);
  printarray(list, n);
  return 0;
}
