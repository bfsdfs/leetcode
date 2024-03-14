#include <iostream>
#include <string>

int main(int argc, const char **argv) {
  std::string s;
  while (std::getline(std::cin, s)) {
    int sum = 0;
    for (auto ch : s) {
      int tmp = ch - '0';
      if (tmp % 2 == 0) {
        sum += tmp;
      }
    }
    std::cout << sum << std::endl << std::endl;
  }
  return 0;
}