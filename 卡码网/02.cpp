#include <iostream>

int main(int argc, const char **argv) {
  int n;
  while (std::cin >> n) {
    while (n--) {
      int a, b;
      std::cin >> a >> b;
      std::cout << a + b << std::endl;
    }
  }
  return 0;
}