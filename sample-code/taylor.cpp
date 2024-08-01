#include <iostream>
#include <cmath>

int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
 return n * factorial(n - 1);
}

double taylorSeries(double x, double n) {
  double result = 0;
  for (int i = 0; i < n; i++) {
    result += pow(x, i) / factorial(i);
  }
  return result;
}

int main() {
  double x = 2.0;
  double n = 10;
  double result = taylorSeries(x, n);
  std::cout << "Taylor series of x^n = " << result << std::endl;
  return 0;
}
