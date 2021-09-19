#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

struct Persona {
  string nombre;
  int edad;
};

/*

  Persona p = Persona();

  Lo que hace el compilador es que aparta un espacio de memoria del tamaño
  necesario para almacenar una estructura que contenga un nombre y una edad.
  A ese espacio le llamamos 'p', y de hecho como ahí aún no le ponemos valores,
  están vacíos en la memoria.

  Cuando creamos una variable así:

  Persona *p = new Persona();

  Lo que hacemos antes del "=", es NO reservar un espacio de memoria para
  almacenar una persona, simplemente creamos una variable "p" que puede
  almacenar una dirección de memoria, y le decimos que almacenará de hecho una
  dirección que apuntará a una persona más adelante.

  Luego, cuando llega el "new Persona()", que de hecho ese ya se ejecuta cuando
  ejecutamos el programa, no cuando compilamos, lo que pasará es que ahí si,
  apartará en memoria un espacio suficiente para almacenar una persona,
  obtendrá su puntero, y ese puntero será el que almacenará en p.

  Por lo tanto, no son exactamente iguales, aunque para fines prácticos puedan
  ser equivalentes, internamente C++ los maneja distinto, y podemos utilizar
  uno u otro según lo que necesitemos más adelante.

*/


int main() {
  // Memoria estática en tiempo de compilación
  Persona p1 = Persona();
  p1.nombre = "Nelo estático";
  p1.edad = 25;
  cout << p1.nombre << endl;
  cout << p1.edad << endl;

  // Memoria dinámica en tiempo de ejecución
  Persona *p2 = new Persona();
  p2->nombre = "Nelo dinámico";
  p2->edad = 26;
  cout << p2->nombre << endl;
  cout << p2->edad << endl;

  union numero_letra {
    int numero;
    char letra;
  };

  numero_letra x = { 'A' };
  cout << "x como numero: " << (char) x.numero << endl;
  cout << "x como letra: " << (int) x.letra << endl;

  enum dias_semana {
    lunes = 'L', martes = 'M', miercoles = 'X'
  };

  dias_semana dia = martes;

  cout << (char) dia << endl;
}
