#include <stdio.h>
#include <stdlib.h>

double absolute(double a) {
  return a >= 0 ? a : -a;
}

double f(double x) {
  return x*x - x - 2.0;
}

double bisection_search(double a, double b) {
  if (absolute(b-a) < 0.0001) return a;
  double x = (a + b) / 2.0;
  if (f(x) < 0 && f(a) < f(b) || f(x) > 0 && f(a) > f(b))
    a = x;
  else
    b = x;
  return bisection_search(a, b);
}

int main(int argc, char const *argv[]) {
  double a = atoi(argv[1]);
  double b = atoi(argv[2]);
  printf("%.2f\n", bisection_search(a,b));
  return 0;
}
