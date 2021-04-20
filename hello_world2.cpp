#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  const string greeting = "Hello, " + name + "!";
  const int pad = 1;
  const int rows = pad * 2 + 3;
  const size_t cols = greeting.size() + pad * 2 + 2;
  // 输出一个空白行，把输出和输入分割开
  cout << endl;

  for (int row = 0; row != rows; ++row) {
    size_t col = 0;
    while (col != cols) {
      if (row == pad + 1 && col == pad + 1) {
        cout << greeting;
        col += greeting.size();
      } else {
        if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1) {
          cout << "*";
        } else {
          cout << " ";
        }
        ++col;
      }
    }
    cout << endl;
  }

  return 0;
}