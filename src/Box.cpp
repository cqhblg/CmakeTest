#include "../include/Box.h"
Box::Box(std::string n) : name(n) {
  width = 200;
  height = 200;
}
void Box::bigger() {
  width += 100;
  height += 100;
}
void Box::smaller() {
  width -= 50;
  height -= 50;
}
int Box::getValue() { return width * height; }

void Box::setWidth(int w) { width = w; }

void Box::setHeight(int h) { height = h; }