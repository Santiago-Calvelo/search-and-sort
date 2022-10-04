#include <stdio.h>
#include <stdlib.h>

int max_(int a, int b) {
  return a >= b ? a : b;
}

int envidont(int c1, int c2, int c3) {
  if (c1 >= 1 && c1 <= 7 && c1 > c2 || c1 > c3)
    return c1;
  if (c2 >= 1 && c2 <= 7 && c2 > c1 || c2 > c3)
    return c2;
  if (c3 >= 1 && c3 <= 7 && c3 > c2 || c3 > c1)
    return c3;
}

void figura(int *c1, int *c2, int *c3) {
  if (*c1 >= 10 && *c1 <= 12) *c1 = 0;
  if (*c2 >= 10 && *c2 <= 12) *c2 = 0;
  if (*c3 >= 10 && *c3 <= 12) *c3 = 0;
}

int envido(int c1, char p1, int c2, char p2, int c3, char p3) {
  figura(&c1,&c2,&c3);
  int res = 0;
  if (p1 == p2) res = c1 + c2 + 20;
  else if (p2 == p3) res = c2 + c3 + 20;
  else if (p1 == p3) res = c1 + c3 + 20;
  else if (p1 == p2 && p2 == p3) {
    res = max_(max_(c1,c2),c3);
  }
  else res = envidont(c1,c2,c3);
  return res;
}

int main(int argc, char const *argv[]) {
  int c1 = atoi(argv[1]);
  char p1 = argv[2][0];
  int c2 = atoi(argv[3]);
  char p2 = argv[4][0];
  int c3 = atoi(argv[5]);
  char p3 = argv[6][0];
  int res = envido(c1,p1,c2,p2,c3,p3);
  printf("%d\n", res);
  return 0;
}
