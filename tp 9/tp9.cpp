/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Alumno {
private:
    string nombre;
    int edad;
public:
    // Constructor para cargar los datos del alumno :3
    Alumno() {
        cout << "Ingrese el nombre del alumno, nya~: ";
        getline(cin, nombre);
        cout << "Ingrese la edad de " << nombre << ": ";
        cin >> edad;
        cin.ignore(); // para limpiar el buffer por si quedan saltos de línea UwU
    }
    // mostrar los datos del alumno OwO
    void mostrarDatos() {
        cout << "\n--- Datos del alumno ---" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " añitos UwU" << endl;
    }
    //verific si es mayor de edad owo
    void verificarEdad() {
        if (edad >= 18)
            cout << nombre << " es mayor de edad, nyaaa :3 🎓" << endl;
        else
            cout << nombre << " es menor de edad, aww que pequeñ@ UwU 🍼" << endl;
    }
};
int main() {
    Alumno alum; // se crea un objeto de tipo Alumno
    alum.mostrarDatos();
    alum.verificarEdad();
    return 0;
}
