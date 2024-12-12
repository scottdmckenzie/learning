/*
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 * */

#include <iostream>
#include <climits> 
#include <cmath>
#include <vector>
using std::vector; 

int findNthPrime(int N) {
  
  int nthPrime = 0;
  int limit = 200000;
  vector<bool> isPrime(limit + 1, true);
  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i * i <= limit; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= limit; j += i) {
        isPrime[j] = false;
      }
    }
  }
  int count = 0;
  for (int i = 2; i <= limit; i++) {
    if (isPrime[i]) {
      count++;
      if (count == N) {
        nthPrime = i;
        break;
      }
    }
  }
  return (nthPrime > 0) ? nthPrime : -1;
}

int main(){
  const int N = 10001;
  int nthPrime = findNthPrime(N);
  printf("\n%d prime is = %2d\n", N, nthPrime);  
  return 0;
}
