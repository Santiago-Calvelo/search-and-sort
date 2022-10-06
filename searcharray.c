#include <stdio.h>
#include <stdlib.h>

int binary_search_array(int a[], int k, int lo, int hi) {
  if (hi - lo == 1 && a[lo+1] != k) return -1;
  else if (hi - lo == 1) return lo + 1;
  int mid = lo + (hi - lo) / 2;
  if (a[mid] >= k)
    return binary_search_array(a, k, lo, mid);
  else
    return binary_search_array(a,k,mid,hi);
}

void print_arr(int a[],int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int k = atoi(argv[2]);
  int a[n];
  for (int i = 0; i < n; i++) {
    a[i] = 2*i;
  }
  print_arr(a,n);
  printf("%d\n", binary_search_array(a,k,0,n-1));
  return 0;
}
