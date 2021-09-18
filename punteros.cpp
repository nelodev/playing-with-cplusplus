#include <iostream>

int main() {
  char letra = 'A';
  char *puntero = &letra;
  std::cout << letra << std::endl; // A
  std::cout << (int *) &letra << std::endl; // 0x7ffee947764f
  std::cout << (int *) puntero << std::endl;
  std::cout << *puntero << std::endl;
}