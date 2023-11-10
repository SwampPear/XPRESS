#include <iostream>
#include <cstddef>
#include <bitset>

std::byte b{42};

std::ostream& operator<<(std::ostream& os, std::byte b) {
    return os << std::bitset<8>(std::to_integer<int>(b));
}

int main() {
  std::cout << b << std::endl;

  return 0;
}
