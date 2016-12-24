#include <iostream>
// se incluye la clase Numero para despues llamar a sus metodos
#include "Empleado.h"

using namespace std;

int main(void)
{
    // se crea un objeto de la clase Numero (Instanciaciación)
    Empleado *obj = new Empleado();

    // declaro una variable llamada nombre de tipo string
    string nombre;
    // declaro dos variable llamadas v_hora y horas_t de tipo int
    int v_hora, horas_t;

    // se pide al usuario que ingrese el nombre del empleado
    cout << "Digite nombre del empleado: ";
    // se guarda el dato en la variable nombre
    cin >> nombre;
    // encapsulamos la variable nombre
    obj->setNombre(nombre);

    // se pide al usuario que ingrese el valor de la hora
    cout << "Digite valor de la hora: ";
    // se guarda el dato en la variable v_hora
    cin >> v_hora;
    // encapsulamos la variable v_hora
    obj->setValorHora(v_hora);

    // pedimos al usuario que ingrese numero de horas que trabajo
    cout << "Digite horas trabajadas: ";
    // guardamos el dato en la variable horas_t
    cin >> horas_t;
    // encapsulamos la variable horas_t
    obj->setHoras(horas_t);

    // si el salario mensual es mayor a 450000
    if (obj->salarioMensual() > 450000)
    {
        // entonces mostrara el nombre del empleado y el salario mensual
        cout << "Empleado: " << obj->getNomre() << endl;
        cout << "Salario mensual: " << obj->salarioMensual() << endl;
    }
    else
    {
        // sino, solo mostrara el nombre del empleado
        cout << "Empleado: " << obj->getNomre() << endl;
    }
}
