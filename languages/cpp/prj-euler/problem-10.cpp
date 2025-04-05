#include <iostream>
#include <climits> 
#include <cmath>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long f(int n){
  vector<bool> isPrime(n, true);
  isPrime[0] = false;
  isPrime[1] = false;
  for (int i = 2; i <= sqrt(n); i++) {
    if (isPrime[i]) {
      for (int j = i * i; j < n; j += i) {
        isPrime[j] = false;
      }
    }
  }
  long long sum = 0;
  for (int i = 2; i < n; i++) {
    if (isPrime[i]) {
      sum += i;
    }
  }
  return sum;
}

int main(){
  
  const int N = 2000000;
  long long sum = f(N);
  printf("sum = %lld\n", sum); 
  return 0;
}
