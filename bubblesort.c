#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void bubble(int a[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    for (int j = 0; j < lenght-1; j++) {
      if (a[j] > a[j+1]) swap(a,j,j+1);
    }
  }
}

void printarray(int a[], int lenght) {
  for (int i = 0; i < lenght; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {4,2,3,1};
  printarray(a,4);
  bubble(a,4);
  printarray(a,4);
  return 0;
}
