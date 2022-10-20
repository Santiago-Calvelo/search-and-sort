#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100

int main(int argc, char *argv[]) {
  // ARRAY DE FRECUENCIAS
  int freqs[MAXLINE];
  // blanquear freqs
  for (int i = 0; i < MAXLINE; i++) {
    freqs[i] = 0;
  }
  char buffer[MAXLINE] = "";
  while (fgets(buffer, MAXLINE, stdin) != NULL) {
    int n = atoi(buffer);
    freqs[n]++;
  }
  int i = 0;
  while (i < MAXLINE) {
    if (freqs[i] != 0) {
      printf("%d\n", i);
      freqs[i]--;
    }
    else {
      i++;
    }
  }
  return 0;
}
