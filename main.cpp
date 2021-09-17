#include <iostream>

int multiplicar(int a, int b = 2) {
    return a * b;
}

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

    /*

        Prueba de comentario en bloque

    */
    std::cout << "¿Cuál es tu edad?" << std::endl;

    // Prueba de comentario en línea
    int edad_usuario = 0;
    std::cin >> edad_usuario;
    std::cout << "Tu edad es: " << edad_usuario << std::endl;

    /*

        1 -> Verdadero
        0 -> Falso

    */
    bool resultado = true && false;
    std::cout << resultado << std::endl; // 0

    bool resultado2 = true || false;
    std::cout << resultado2 << std::endl; // 1

    bool resultado3 = !true;
    std::cout << resultado3 << std::endl; // 0

    int new_age = 25;
    std::cout << "Edad: ";
    std::cin >> new_age;
    if (new_age < 18 || new_age > 40) {
        std::cout << "No puedes votar" << std::endl;
    } else {
        std::cout << "Puedes votar" << std::endl;
    }

    int option = 0;
    std::cout << "Introduce una opción: ";
    std::cin >> option;
    switch (option)
    {
    case 1:
        std::cout << "Opción 1" << std::endl;
        break;
    case 2:
        std::cout << "Opción 2" << std::endl;
        break;
    default:
        std::cout << "Opción no soportada" << std::endl;
        break;
    }

    int lista[] = { 100, 200, 300 };
    int limite = sizeof(lista) / sizeof(lista[0]);
    for (int i = 0; i < limite; i++)
    {
        std::cout << i << std::endl;
        if (lista[i] == 200) break;
    }

    while(true) {
        char respuesta;
        std::cout << "¿Deseas terminar?" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 'y') {
            std::cout << "Bye bye" << std::endl;
            break;
        }
    }

    do {
        char respuesta;
        std::cout << "¿Deseas terminar?" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 'y') {
            std::cout << "Bye bye" << std::endl;
            break;
        }
    } while (true);

    std::cout << multiplicar(200) << std::endl;
}
