// CMakeTest.cpp:
// 定义应用程序的入口点。
//

#include <iostream>
#include"Box.h"
using namespace std;
namespace test {
extern Box factoryBox(std::string);
extern int calculate(std::string);
}

int main() {
  cout << "Hello CMake." << endl;
  string s = "5555";
  test::calculate(s);
  Box tb = test::factoryBox(s);
  cout << tb.name << "," << tb.getValue() << endl;
  return 0;
}
