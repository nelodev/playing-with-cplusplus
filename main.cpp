#include <iostream>

int main() {
    int edad = 25;
    edad = 18;
    const char letra = 'A';
    int lista_edades[] = {18, 24, 16};
    lista_edades[2] = 32;
    std::cout << lista_edades[0] << std::endl;
    std::cout << lista_edades[1] << std::endl;
    std::cout << lista_edades[2] << std::endl;
    std::cout << edad << std::endl;
    std::cout << letra << std::endl;

    int edades[] = { 24, 40, 19, 32 };
    std::cout << sizeof(edades) / sizeof(edades[0]) << std::endl;
} 
