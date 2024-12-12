/*
 * The prime factors of 13195 are 5,7,13,29
 * What is the largest prime factor of the number 600851475143
 * */

#include <iostream>

long long prime_factors(long long N) {
  long long largestFactor = 0;
  while (N % 2 == 0) {
    largestFactor = 2;
    N = N / 2;
  }
  for (long long i = 3; i * i <= N; i += 2) {
    while (N % i == 0) {
      largestFactor = i;
      N = N / i;
    }
  }
  if (N > 2) {
    largestFactor = N;
  }
  return largestFactor;
}

int main(){
  long long N = 600851475143LL;
  long long largestPrimeFactor = prime_factors(N);
  printf("\nsum = %lld\n", largestPrimeFactor);  
  return 0;
}
