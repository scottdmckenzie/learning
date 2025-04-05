#include <iostream>
#include <climits> 
#include <cmath>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int f(int n) {
  int product = 0;
  for (int a = 1; a < n / 3; a++) { 
    for (int b = a + 1; b < n / 2; b++) { 
      int c = n - a - b; 
      if (a * a + b * b == c * c) { 
        product = a * b * c;
        break;
      }
    }
    if (product > 0) break; // Exit early if the triple is found
  }
  return product;
}

int main() {
  const int N = 1000;
  int product = f(N);
  printf("product is = %d\n", product);
  return 0;
}