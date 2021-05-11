#include <iostream>

class Y;

class X {
  Y *pY;
  std::string name;

public:
  X(std::string name, Y &y) : name(name) { pY = &y; }
  std::string getName() const { return this->name; }
};

class Y {
  X x;
  std::string name;

public:
  Y(std::string name) : name(name), x(name) {}
  std::string getName() const { return this->name; }
};
