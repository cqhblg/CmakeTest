#pragma once
#include <string>
class Box {
 public:
  Box(std::string n);
  std::string name;
  int width, height;

  void bigger();
  void smaller();
  int getValue();

  void setWidth(int w);

  void setHeight(int h);

  void test();
};