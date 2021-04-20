#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;

  // 构造要输出的信息
  const string greeting = "Hello, " + name + "!";

  const string spaces(greeting.size(), ' ');
  const string second = "* " + spaces + " *";
  const string first(second.size(), '*');

  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}