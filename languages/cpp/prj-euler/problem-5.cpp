/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder 
 * what is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
 * */

#include <iostream>
#include <climits> 

int evenlyDivisible(int N) {
  int smallestNum = 2520;
  int i = 2;
  while (i <= N) {
    if (smallestNum % 2 != 0) {
      smallestNum++;
      if (i > 2) {
        i = 2;
      }
    }
    else if (smallestNum % 3 != 0) {
      smallestNum++;
      if (i > 2) {
        i = 2;
      }
    }
    else if (smallestNum % i != 0) {
      smallestNum++;
      if (i > 2) {
        i = 2;
      }
    }
    i++;
  }
  return smallestNum;
}

int main(){
  int N = 20;
  int smallestNum = evenlyDivisible(N);
  printf("\nsmallest number evenly divisble from 1 to %d = %2d\n", N, smallestNum);  
  return 0;
}
