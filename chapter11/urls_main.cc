#include "Vec.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

#include "urls.h"

using std::cin;
using std::cout;
using std::endl;
using std::find_if;
using std::getline;
using std::string;

int main() {
  string s;
  while (getline(cin, s)) {
    Vec<string> v = find_urls(s);
#ifdef _MSC_VER
    for (Vec<string>::const_iterator i = v.begin();
#else
    for (Vec<string>::const_iterator i = v.begin();
#endif
         i != v.end(); ++i)
      cout << *i << endl;
  }
  return 0;
}
