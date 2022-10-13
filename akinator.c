#include <stdio.h>
#include <stdlib.h>

int binary_search(int lo, int hi) {
  int lenght = hi;
  for (int i = 0; i < lenght; i++) {
    if (hi-lo == 1) return lo;
    int mid = lo + (hi - lo) / 2;
    printf("Igual o mas grande que %d °-° s/n\n", mid);
    char response;
    scanf("%c", &response);
    getchar();
    if (response == 'n')
      hi = mid;
    else
      lo = mid;
  }
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("Pensa un numero de 0 a %d\n", n);
  printf("Listo? Presiona enter\n");
  getchar();
  int guess = binary_search(0,n);
  printf("Tu numero es %d\n", guess);
}
