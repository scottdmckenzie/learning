/*
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 * */

#include <iostream>
#include <climits> 

int sumSqDiff(int N) {
  int sumDiff = 0;
  int sumOfSq = 0, sqOfSum = 0;
  for (int i = 1; i <= N; i++) {
    sqOfSum += i;
    sumOfSq += i * i;
  }
  return ((sqOfSum * sqOfSum) - sumOfSq);
}

int main(){
  int N = 100;
  int sumDiff = sumSqDiff(N);
  printf("\ndiff between sum of sq's and square of sum = %d\n", sumDiff);  
  return 0;
}
