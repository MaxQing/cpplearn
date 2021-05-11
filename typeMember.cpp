#include <iostream>
#include <vector>

class Screen {
public:
  // equals using pos = std::string::size_type;
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd, char c)
      : height(ht), width(wd), contents(ht * wd, c) {}
  char get() const { return contents[cursor]; }
  inline char get(pos ht, pos wd) const;
  Screen &move(pos r, pos c);
  Screen &set(char);
  Screen &set(pos, pos, char);
  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }
  pos size() const;

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  void do_display(std::ostream &os) const { os << contents; }
  friend class Window_mgr;
};

Screen::pos Screen::size() const { return this->height * this->width; }

// outside -> inline
inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

char Screen::get(pos ht, pos wd) const {
  pos row = ht * width;
  return contents[row + wd];
}

inline Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
  contents[r * width + col] = ch;
  return *this;
}

class Window_mgr {
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);

private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i) {
  Screen &s = screens[i];
  s.contents = std::string(s.height * s.width, ' ');
}

int main() {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(std::cout);
  std::cout << "\n";
  myScreen.display(std::cout);
  std::cout << "\n";
  return 0;
}