#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void insertion(int a[],int n) {
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (a[i] < a[j]) sort(a,i,j);
    }
  }
}

int ternas(int a[], int n) {
  insertion(a, n);
  int i = 0;
  int c = 0;
  while (i < n-2) {
    int j = i+1;
    int k = n-1;
    while (j < k) {
      int sum = a[i] + a[j] + a[k];
      if      (sum == 0) { c++; j++; k--; }
      else if (sum < 0)    j++;
      else                 k--;
    }
    i++;
  }
  return c;
}

void printarray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {1,-5,-7,2,7,0,3,1,-2};
  int n = sizeof(a)/sizeof(int);
  printarray(a, n);
  printf("%d\n", ternas(a, n);
  return 0;
}
