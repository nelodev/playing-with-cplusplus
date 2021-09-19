#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person {
  private:
    static int numero_personas;
    string nombre;
    int edad;
  public:
    Person(string nombre, int edad);

    ~Person() {
      cout << "Destructor" << endl;
    }

    Person &setNombre(string nombre) {
      this->nombre = nombre;
      return *this;
    }

    Person &setEdad(int edad) {
      this->edad = edad;
      return *this;
    }

    void saludar();
};

int Person::numero_personas = 0;

void Person::saludar() {
  cout << "Hola, soy " << nombre << ". Hay " << numero_personas << "personas y tengo " << edad << " años" << endl;
}

Person::Person(string nombre, int edad) {
  this->nombre = nombre;
  this->edad = edad;
  numero_personas += 1;
};

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

  // Memoria utilizada en tiempo de compilación
  Person p3 = Person("Nelo", 28);
  p3.saludar();

  p3.setNombre("Emanuel").setEdad(49);

  p3.saludar();

  // Memoria utilizada en tiempo de ejecución
  Person *p4 = new Person("Manuel", 28);

  // delete p4;

  p4->saludar();

  p4->setEdad(30).setNombre("Luis");

  p4->saludar();
}
