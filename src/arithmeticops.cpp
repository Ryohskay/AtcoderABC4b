#include <bits/stdc++.h>

int main() {
  std::cout << 1+1 << std::endl;  // 2
  std::cout << 3+4 << std::endl;  // -1
  std::cout << 2*3 << std::endl;  // 6
  std::cout << 7/3 << std::endl;  // 2 <- result is an integer
  std::cout << 7.0 / 3.0 << std::endl;  // 2.33333 <- result is a float
  std::cout << 7%3 << std::endl;  // 1 <- mod operation
}

/*
 * Since a division of integers causes decimal values to be cut,
 * It tends to calculate more precisely when you try to save calculation of division for later. 
 *
 * E.G. 3/2*4 -> 4 VS. 3*4/2 -> 6
*/
