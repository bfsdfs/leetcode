#include <iostream>

int main(int argc, const char **argv) {
  int n;
  while (std::cin >> n) {
    if (n == 0)
      break;
    int sum = 0;
    int tmp;
    while (n--) {
      std::cin >> tmp;
      sum += tmp;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}