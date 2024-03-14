#include <iostream>

int main(int argc, const char **argv) {
  int a, b;
  while (std::cin >> a >> b) {
    std::cout << a + b << std::endl << std::endl;
  }
  return 0;
}