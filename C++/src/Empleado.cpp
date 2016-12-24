#include "Empleado.h"

Empleado::Empleado()
{
    // le asignamos valores por defecto a los atributos de la clase Empleado
    nombre = "";
    valor_hora = 0;
    horas = 0;
}

Empleado::~Empleado()
{
    //dtor
}

// implementacion de los metodos Setters y Getters de los atributos de la clase Empleado
void Empleado::setNombre(string val)
{
    nombre = val;
}
string Empleado::getNomre()
{
    return nombre;
}
void Empleado::setValorHora(int val)
{
    valor_hora = val;
}
int Empleado::getValorHora()
{
    return valor_hora;
}
void Empleado::setHoras(int val)
{
    horas = val;
}
int Empleado::getHoras()
{
    return horas;
}

// implementacion del metodo para calcular el salario mensual del empleado
int Empleado::salarioMensual()
{
    // declaramos una variable y la inicializamos en el valor de la hora por el numero de horas
    int salario = getValorHora() * getHoras();
    // retornamos el resultado de salario
    return salario;
}
