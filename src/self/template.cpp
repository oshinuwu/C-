#include <iostream>

// Template function to swap two values of any type
template <typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 5;
  int y = 10;
  std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
  swap(x, y);
  std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

  double dx = 3.14;
  double dy = 2.71;
  std::cout << "Before swap: dx = " << dx << ", dy = " << dy << std::endl;
  swap(dx, dy);
  std::cout << "After swap: dx = " << dx << ", dy = " << dy << std::endl;

  char cx = 'a';
  char cy = 'b';
  std::cout << "Before swap: cx = " << cx << ", cy = " << cy << std::endl;
  swap(cx, cy);
  std::cout << "After swap: cx = " << cx << ", cy = " << cy << std::endl;

  fflush(stdin);
  std::cin.get();
  return 0;
}