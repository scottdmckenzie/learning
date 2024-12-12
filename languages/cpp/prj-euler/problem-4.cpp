/*
 * A palindromic number reads the same both ways
 * The largest palindrome made from the product of two 2-digit numbers is
 * 9009 = 91 x 99 
 * find largest palindrome made from the product of two 3-digit numbers
 *
 * */

#include <iostream>
#include <string>

using std::string;

bool isPalindrome(const string &str) {
  int start = 0, end = (int)str.size() - 1;
  while (start < end) {
    if (str[start] != str[end]) {
      return false;
    }
    start++;
    end--;
  }
  return true;
}
long long findValues() {
  long long largestPalindrome = 0;
  for (int x = 999; x >= 100; x--) {
    for (int y = 999; y >= 100; y--) {
      long long product = x * y;
      string str = std::to_string(product);
      if (isPalindrome(str) && product > largestPalindrome) {
        largestPalindrome = product;
      }
    }
  }
  return largestPalindrome;
}

int main(){
  long long largestPalindrome = findValues();
  printf("\nlargest palindromic 3-digit number = %lld\n", largestPalindrome);  
  return 0;
}
