#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

int main() {
  string s;
  while (getline(cin, s)) { // 接受一整行字符串
    float sum = 0;
    int count = 0;
    bool flag = true;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A') {
        sum += 4;
        count++;
      } else if (s[i] == 'B') {
        sum += 3;
        count++;
      } else if (s[i] == 'C') {
        sum += 2;
        count++;
      } else if (s[i] == 'D') {
        sum += 1;
        count++;
      } else if (s[i] == 'F') {
        sum += 0;
        count++;
      } else if (s[i] == ' ')
        continue;
      else {
        flag = false;
        cout << "Unknown" << endl;
        break;
      }
    }
    if (flag)
      cout << std::fixed << std::setprecision(2) << sum / count << endl;
  }
  return 0;
}