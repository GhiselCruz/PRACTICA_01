//Integrantes:
//Claros Herbas André Shaiel
//Romero Caspary Isabel
//Cruz Rocabado Ghisel Yaritza
//Janko Sanga Helen
//Taboada Alarcon Marco Antonio



//En este programa podemos demostrar los tres pilares de la programación orientada a objetos(encapsulamiento, herencia,polimorfismo),
//de los cuales es muy importante conocer su concepto, aplicación y funcionalidad.

//Primeramente podemos demostrar el encapsulamiento al haber creado una clase "madre" llamada Animal, la cual tiene sus atributos
//creados con el modificador de acceso "protected" el cual permite su acceso dentro de la misma clase o clases heredadas.Como podemos 
//ver en la clase "Animal", los atributos nombre y edad están con el modificador protected, puesto que solo podrán ser usados en clases
//heredadas. Además podemos observar la herencia de clases ya que heredamos dos clases "hijas" de "Animal" (Perro y Gato), y al heredar
//clases nos evitamos hacer redundancia volviendo a escribir el mismo programa.Por último podemos ver el polimorfismo ya que las clases
//heredadas tienen los mismos atributos que la clase madre manda de manera general, pero estas clases heredadas tienen sus atributos 
//únicos y definidos de diferente manera(nombre, edad), esto es el polimorfismo que nos permite heredar los mismos atributos de la clase 
//madre pero modificando de acuerdo a las características de cada objeto.



#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string nombre;
    int edad;

public:
    Animal(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    virtual void hablar() = 0; // Método virtual puro

    string getNombre() { return nombre; }
    int getEdad() { return edad; }
};
class Perro : public Animal {
public:
    Perro(string nombre, int edad) : Animal(nombre, edad) {}

    void hablar() override { cout << "Woof!" << endl; }
};


class Gato : public Animal {
public:
    Gato(string nombre, int edad) : Animal(nombre, edad) {}

    void hablar() override { cout << "Miau!" << endl; }
};


int main() {
    Perro perro("Toby", 5);
    Gato gato("Misha", 3);

    // Polimorfismo: Se llama al método hablar() de cada objeto
    // según su tipo específico.
    perro.hablar();
    gato.hablar();

    return 0;
}