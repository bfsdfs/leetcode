#include <iostream>

int main(int argc, const char **argv) {
  int n;
  while (std::cin >> n) {
    while (n--) {
      int m;
      std::cin >> m;
      int sum = 0;
      int tmp;
      while (m--) {
        std::cin >> tmp;
        sum += tmp;
      }
      std::cout << sum << std::endl;
      if (n != 0)
        std::cout << std::endl;
    }
  }
  return 0;
}