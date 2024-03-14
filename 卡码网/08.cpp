#include <iostream>
#include <numeric>
#include <vector>

int main(int argc, const char **argv) {
  int n;
  while (std::cin >> n) {
    if (n == 0)
      break;
    std::vector<int> tmp(n, 0);
    for (int i = 0; i < n; ++i) {
      std::cin >> tmp[i];
    }
    int aver = std::accumulate(tmp.begin(), tmp.end(), 0) / n;
    int res = 0;
    for (auto var : tmp) {
      if (var > aver)
        res += (var - aver);
    }
    std::cout << res << std::endl;
  }
  return 0;
}