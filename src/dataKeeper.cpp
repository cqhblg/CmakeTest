#include<string>
#include"../include/Box.h"
namespace test {
Box factoryBox(std::string name) {
  Box b(name);
  return b;
}
}