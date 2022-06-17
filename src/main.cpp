#include "../include/common.h"


int main() {
  Duplex<int> a('A', random());
  std::cout << "a.get_message: " << a.get_message() << std::endl;

  Duplex<int> b('B', random());
  std::cout << "b.get_message: " << b.get_message() << std::endl;
  
  link(a, b);

  Duplex<std::string> c('C', "I am C");
  std::cout << "c.get_message: " << c.get_message() << std::endl;

  Duplex<std::string> d('D', "I am D");
  std::cout << "d.get_message: " << d.get_message() << std::endl;
  
  link(c, d);
}